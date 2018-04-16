/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cloudwatchlogsclient.h"
#include "cloudwatchlogsclient_p.h"

#include "core/awssignaturev4.h"
#include "associatekmskeyrequest.h"
#include "associatekmskeyresponse.h"
#include "cancelexporttaskrequest.h"
#include "cancelexporttaskresponse.h"
#include "createexporttaskrequest.h"
#include "createexporttaskresponse.h"
#include "createloggrouprequest.h"
#include "createloggroupresponse.h"
#include "createlogstreamrequest.h"
#include "createlogstreamresponse.h"
#include "deletedestinationrequest.h"
#include "deletedestinationresponse.h"
#include "deleteloggrouprequest.h"
#include "deleteloggroupresponse.h"
#include "deletelogstreamrequest.h"
#include "deletelogstreamresponse.h"
#include "deletemetricfilterrequest.h"
#include "deletemetricfilterresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deleteretentionpolicyrequest.h"
#include "deleteretentionpolicyresponse.h"
#include "deletesubscriptionfilterrequest.h"
#include "deletesubscriptionfilterresponse.h"
#include "describedestinationsrequest.h"
#include "describedestinationsresponse.h"
#include "describeexporttasksrequest.h"
#include "describeexporttasksresponse.h"
#include "describeloggroupsrequest.h"
#include "describeloggroupsresponse.h"
#include "describelogstreamsrequest.h"
#include "describelogstreamsresponse.h"
#include "describemetricfiltersrequest.h"
#include "describemetricfiltersresponse.h"
#include "describeresourcepoliciesrequest.h"
#include "describeresourcepoliciesresponse.h"
#include "describesubscriptionfiltersrequest.h"
#include "describesubscriptionfiltersresponse.h"
#include "disassociatekmskeyrequest.h"
#include "disassociatekmskeyresponse.h"
#include "filterlogeventsrequest.h"
#include "filterlogeventsresponse.h"
#include "getlogeventsrequest.h"
#include "getlogeventsresponse.h"
#include "listtagsloggrouprequest.h"
#include "listtagsloggroupresponse.h"
#include "putdestinationrequest.h"
#include "putdestinationresponse.h"
#include "putdestinationpolicyrequest.h"
#include "putdestinationpolicyresponse.h"
#include "putlogeventsrequest.h"
#include "putlogeventsresponse.h"
#include "putmetricfilterrequest.h"
#include "putmetricfilterresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "putretentionpolicyrequest.h"
#include "putretentionpolicyresponse.h"
#include "putsubscriptionfilterrequest.h"
#include "putsubscriptionfilterresponse.h"
#include "tagloggrouprequest.h"
#include "tagloggroupresponse.h"
#include "testmetricfilterrequest.h"
#include "testmetricfilterresponse.h"
#include "untagloggrouprequest.h"
#include "untagloggroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudWatchLogs
 * \brief The QtAws::CloudWatchLogs contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::CloudWatchLogsClient
 *
 * \brief The CloudWatchLogsClient class provides access the Amazon CloudWatch Logs service.
 *
 * \ingroup CloudWatchLogs
 *
 *  You can use Amazon CloudWatch Logs to monitor, store, and access your log files from Amazon EC2 instances, AWS
 *  CloudTrail, or other sources. You can then retrieve the associated log data from CloudWatch Logs using the CloudWatch
 *  console, CloudWatch Logs commands in the AWS CLI, CloudWatch Logs API, or CloudWatch Logs
 * 
 *  SDK>
 * 
 *  You can use CloudWatch Logs
 * 
 *  to> <ul> <li>
 * 
 *  <b>Monitor logs from EC2 instances in real-time</b>: You can use CloudWatch Logs to monitor applications and systems
 *  using log data. For example, CloudWatch Logs can track the number of errors that occur in your application logs and send
 *  you a notification whenever the rate of errors exceeds a threshold that you specify. CloudWatch Logs uses your log data
 *  for monitoring; so, no code changes are required. For example, you can monitor application logs for specific literal
 *  terms (such as "NullReferenceException") or count the number of occurrences of a literal term at a particular position
 *  in log data (such as "404" status codes in an Apache access log). When the term you are searching for is found,
 *  CloudWatch Logs reports the data to a CloudWatch metric that you
 * 
 *  specify> </li> <li>
 * 
 *  <b>Monitor AWS CloudTrail logged events</b>: You can create alarms in CloudWatch and receive notifications of particular
 *  API activity as captured by CloudTrail and use the notification to perform
 * 
 *  troubleshooting> </li> <li>
 * 
 *  <b>Archive log data</b>: You can use CloudWatch Logs to store your log data in highly durable storage. You can change
 *  the log retention setting so that any log events older than this setting are automatically deleted. The CloudWatch Logs
 *  agent makes it easy to quickly send both rotated and non-rotated log data off of a host and into the log service. You
 *  can then access the raw log data when you need
 */

/*!
 * \brief Constructs a CloudWatchLogsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudWatchLogsClient::CloudWatchLogsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudWatchLogsClientPrivate(this), parent)
{
    Q_D(CloudWatchLogsClient);
    d->apiVersion = QStringLiteral("2014-03-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("logs");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch Logs");
    d->serviceName = QStringLiteral("logs");
}

/*!
 * \overload CloudWatchLogsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
CloudWatchLogsClient::CloudWatchLogsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudWatchLogsClientPrivate(this), parent)
{
    Q_D(CloudWatchLogsClient);
    d->apiVersion = QStringLiteral("2014-03-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("logs");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch Logs");
    d->serviceName = QStringLiteral("logs");
}

/*!
 * Associates the specified AWS Key Management Service (AWS KMS) customer master key (CMK) with the specified log
 *
 * group>
 *
 * Associating an AWS KMS CMK with a log group overrides any existing associations between the log group and a CMK. After a
 * CMK is associated with a log group, all newly ingested data for the log group is encrypted using the CMK. This
 * association is stored as long as the data encrypted with the CMK is still within Amazon CloudWatch Logs. This enables
 * Amazon CloudWatch Logs to decrypt this data whenever it is
 *
 * requested>
 *
 * Note that it can take up to 5 minutes for this operation to take
 *
 * effect>
 *
 * If you attempt to associate a CMK with a log group but the CMK does not exist or the CMK is disabled, you will receive
 * an <code>InvalidParameterException</code> error.
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateKmsKeyResponse * CloudWatchLogsClient::associateKmsKey(const AssociateKmsKeyRequest &request)
{
    return qobject_cast<AssociateKmsKeyResponse *>(send(request));
}

/*!
 * Cancels the specified export
 *
 * task>
 *
 * The task must be in the <code>PENDING</code> or <code>RUNNING</code>
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CancelExportTaskResponse * CloudWatchLogsClient::cancelExportTask(const CancelExportTaskRequest &request)
{
    return qobject_cast<CancelExportTaskResponse *>(send(request));
}

/*!
 * Creates an export task, which allows you to efficiently export data from a log group to an Amazon S3
 *
 * bucket>
 *
 * This is an asynchronous call. If all the required information is provided, this operation initiates an export task and
 * responds with the ID of the task. After the task has started, you can use <a>DescribeExportTasks</a> to get the status
 * of the export task. Each account can only have one active (<code>RUNNING</code> or <code>PENDING</code>) export task at
 * a time. To cancel an export task, use
 *
 * <a>CancelExportTask</a>>
 *
 * You can export logs from multiple log groups or multiple time ranges to the same S3 bucket. To separate out log data for
 * each export task, you can specify a prefix to be used as the Amazon S3 key prefix for all exported
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateExportTaskResponse * CloudWatchLogsClient::createExportTask(const CreateExportTaskRequest &request)
{
    return qobject_cast<CreateExportTaskResponse *>(send(request));
}

/*!
 * Creates a log group with the specified
 *
 * name>
 *
 * You can create up to 5000 log groups per
 *
 * account>
 *
 * You must use the following guidelines when naming a log
 *
 * group> <ul> <li>
 *
 * Log group names must be unique within a region for an AWS
 *
 * account> </li> <li>
 *
 * Log group names can be between 1 and 512 characters
 *
 * long> </li> <li>
 *
 * Log group names consist of the following characters: a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/' (forward slash),
 * and '.'
 *
 * (period)> </li> </ul>
 *
 * If you associate a AWS Key Management Service (AWS KMS) customer master key (CMK) with the log group, ingested data is
 * encrypted using the CMK. This association is stored as long as the data encrypted with the CMK is still within Amazon
 * CloudWatch Logs. This enables Amazon CloudWatch Logs to decrypt this data whenever it is
 *
 * requested>
 *
 * If you attempt to associate a CMK with the log group but the CMK does not exist or the CMK is disabled, you will receive
 * an <code>InvalidParameterException</code> error.
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLogGroupResponse * CloudWatchLogsClient::createLogGroup(const CreateLogGroupRequest &request)
{
    return qobject_cast<CreateLogGroupResponse *>(send(request));
}

/*!
 * Creates a log stream for the specified log
 *
 * group>
 *
 * There is no limit on the number of log streams that you can create for a log
 *
 * group>
 *
 * You must use the following guidelines when naming a log
 *
 * stream> <ul> <li>
 *
 * Log stream names must be unique within the log
 *
 * group> </li> <li>
 *
 * Log stream names can be between 1 and 512 characters
 *
 * long> </li> <li>
 *
 * The ':' (colon) and '*' (asterisk) characters are not
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLogStreamResponse * CloudWatchLogsClient::createLogStream(const CreateLogStreamRequest &request)
{
    return qobject_cast<CreateLogStreamResponse *>(send(request));
}

/*!
 * Deletes the specified destination, and eventually disables all the subscription filters that publish to it. This
 * operation does not delete the physical resource encapsulated by the
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDestinationResponse * CloudWatchLogsClient::deleteDestination(const DeleteDestinationRequest &request)
{
    return qobject_cast<DeleteDestinationResponse *>(send(request));
}

/*!
 * Deletes the specified log group and permanently deletes all the archived log events associated with the log
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLogGroupResponse * CloudWatchLogsClient::deleteLogGroup(const DeleteLogGroupRequest &request)
{
    return qobject_cast<DeleteLogGroupResponse *>(send(request));
}

/*!
 * Deletes the specified log stream and permanently deletes all the archived log events associated with the log
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLogStreamResponse * CloudWatchLogsClient::deleteLogStream(const DeleteLogStreamRequest &request)
{
    return qobject_cast<DeleteLogStreamResponse *>(send(request));
}

/*!
 * Deletes the specified metric
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteMetricFilterResponse * CloudWatchLogsClient::deleteMetricFilter(const DeleteMetricFilterRequest &request)
{
    return qobject_cast<DeleteMetricFilterResponse *>(send(request));
}

/*!
 * Deletes a resource policy from this account. This revokes the access of the identities in that policy to put log events
 * to this
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteResourcePolicyResponse * CloudWatchLogsClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Deletes the specified retention
 *
 * policy>
 *
 * Log events do not expire if they belong to log groups without a retention
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRetentionPolicyResponse * CloudWatchLogsClient::deleteRetentionPolicy(const DeleteRetentionPolicyRequest &request)
{
    return qobject_cast<DeleteRetentionPolicyResponse *>(send(request));
}

/*!
 * Deletes the specified subscription
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSubscriptionFilterResponse * CloudWatchLogsClient::deleteSubscriptionFilter(const DeleteSubscriptionFilterRequest &request)
{
    return qobject_cast<DeleteSubscriptionFilterResponse *>(send(request));
}

/*!
 * Lists all your destinations. The results are ASCII-sorted by destination
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDestinationsResponse * CloudWatchLogsClient::describeDestinations(const DescribeDestinationsRequest &request)
{
    return qobject_cast<DescribeDestinationsResponse *>(send(request));
}

/*!
 * Lists the specified export tasks. You can list all your export tasks or filter the results based on task ID or task
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeExportTasksResponse * CloudWatchLogsClient::describeExportTasks(const DescribeExportTasksRequest &request)
{
    return qobject_cast<DescribeExportTasksResponse *>(send(request));
}

/*!
 * Lists the specified log groups. You can list all your log groups or filter the results by prefix. The results are
 * ASCII-sorted by log group
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLogGroupsResponse * CloudWatchLogsClient::describeLogGroups(const DescribeLogGroupsRequest &request)
{
    return qobject_cast<DescribeLogGroupsResponse *>(send(request));
}

/*!
 * Lists the log streams for the specified log group. You can list all the log streams or filter the results by prefix. You
 * can also control how the results are
 *
 * ordered>
 *
 * This operation has a limit of five transactions per second, after which transactions are
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLogStreamsResponse * CloudWatchLogsClient::describeLogStreams(const DescribeLogStreamsRequest &request)
{
    return qobject_cast<DescribeLogStreamsResponse *>(send(request));
}

/*!
 * Lists the specified metric filters. You can list all the metric filters or filter the results by log name, prefix,
 * metric name, or metric namespace. The results are ASCII-sorted by filter
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeMetricFiltersResponse * CloudWatchLogsClient::describeMetricFilters(const DescribeMetricFiltersRequest &request)
{
    return qobject_cast<DescribeMetricFiltersResponse *>(send(request));
}

/*!
 * Lists the resource policies in this
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeResourcePoliciesResponse * CloudWatchLogsClient::describeResourcePolicies(const DescribeResourcePoliciesRequest &request)
{
    return qobject_cast<DescribeResourcePoliciesResponse *>(send(request));
}

/*!
 * Lists the subscription filters for the specified log group. You can list all the subscription filters or filter the
 * results by prefix. The results are ASCII-sorted by filter
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeSubscriptionFiltersResponse * CloudWatchLogsClient::describeSubscriptionFilters(const DescribeSubscriptionFiltersRequest &request)
{
    return qobject_cast<DescribeSubscriptionFiltersResponse *>(send(request));
}

/*!
 * Disassociates the associated AWS Key Management Service (AWS KMS) customer master key (CMK) from the specified log
 *
 * group>
 *
 * After the AWS KMS CMK is disassociated from the log group, AWS CloudWatch Logs stops encrypting newly ingested data for
 * the log group. All previously ingested data remains encrypted, and AWS CloudWatch Logs requires permissions for the CMK
 * whenever the encrypted data is
 *
 * requested>
 *
 * Note that it can take up to 5 minutes for this operation to take
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateKmsKeyResponse * CloudWatchLogsClient::disassociateKmsKey(const DisassociateKmsKeyRequest &request)
{
    return qobject_cast<DisassociateKmsKeyResponse *>(send(request));
}

/*!
 * Lists log events from the specified log group. You can list all the log events or filter the results using a filter
 * pattern, a time range, and the name of the log
 *
 * stream>
 *
 * By default, this operation returns as many log events as can fit in 1 MB (up to 10,000 log events), or all the events
 * found within the time range that you specify. If the results include a token, then there are more log events available,
 * and you can get additional results by specifying the token in a subsequent
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
FilterLogEventsResponse * CloudWatchLogsClient::filterLogEvents(const FilterLogEventsRequest &request)
{
    return qobject_cast<FilterLogEventsResponse *>(send(request));
}

/*!
 * Lists log events from the specified log stream. You can list all the log events or filter using a time
 *
 * range>
 *
 * By default, this operation returns as many log events as can fit in a response size of 1MB (up to 10,000 log events).
 * You can get additional log events by specifying one of the tokens in a subsequent
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLogEventsResponse * CloudWatchLogsClient::getLogEvents(const GetLogEventsRequest &request)
{
    return qobject_cast<GetLogEventsResponse *>(send(request));
}

/*!
 * Lists the tags for the specified log
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsLogGroupResponse * CloudWatchLogsClient::listTagsLogGroup(const ListTagsLogGroupRequest &request)
{
    return qobject_cast<ListTagsLogGroupResponse *>(send(request));
}

/*!
 * Creates or updates a destination. A destination encapsulates a physical resource (such as an Amazon Kinesis stream) and
 * enables you to subscribe to a real-time stream of log events for a different account, ingested using
 * <a>PutLogEvents</a>. Currently, the only supported physical resource is a Kinesis stream belonging to the same account
 * as the
 *
 * destination>
 *
 * Through an access policy, a destination controls what is written to its Kinesis stream. By default,
 * <code>PutDestination</code> does not set any access policy with the destination, which means a cross-account user cannot
 * call <a>PutSubscriptionFilter</a> against this destination. To enable this, the destination owner must call
 * <a>PutDestinationPolicy</a> after
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutDestinationResponse * CloudWatchLogsClient::putDestination(const PutDestinationRequest &request)
{
    return qobject_cast<PutDestinationResponse *>(send(request));
}

/*!
 * Creates or updates an access policy associated with an existing destination. An access policy is an <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies_overview.html">IAM policy document</a> that is used to
 * authorize claims to register a subscription filter against a given
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutDestinationPolicyResponse * CloudWatchLogsClient::putDestinationPolicy(const PutDestinationPolicyRequest &request)
{
    return qobject_cast<PutDestinationPolicyResponse *>(send(request));
}

/*!
 * Uploads a batch of log events to the specified log
 *
 * stream>
 *
 * You must include the sequence token obtained from the response of the previous call. An upload in a newly created log
 * stream does not require a sequence token. You can also get the sequence token using <a>DescribeLogStreams</a>. If you
 * call <code>PutLogEvents</code> twice within a narrow time period using the same value for <code>sequenceToken</code>,
 * both calls may be successful, or one may be
 *
 * rejected>
 *
 * The batch of events must satisfy the following
 *
 * constraints> <ul> <li>
 *
 * The maximum batch size is 1,048,576 bytes, and this size is calculated as the sum of all event messages in UTF-8, plus
 * 26 bytes for each log
 *
 * event> </li> <li>
 *
 * None of the log events in the batch can be more than 2 hours in the
 *
 * future> </li> <li>
 *
 * None of the log events in the batch can be older than 14 days or the retention period of the log
 *
 * group> </li> <li>
 *
 * The log events in the batch must be in chronological ordered by their time stamp (the time the event occurred, expressed
 * as the number of milliseconds after Jan 1, 1970 00:00:00
 *
 * UTC)> </li> <li>
 *
 * The maximum number of log events in a batch is
 *
 * 10,000> </li> <li>
 *
 * A batch of log events in a single request cannot span more than 24 hours. Otherwise, the operation
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutLogEventsResponse * CloudWatchLogsClient::putLogEvents(const PutLogEventsRequest &request)
{
    return qobject_cast<PutLogEventsResponse *>(send(request));
}

/*!
 * Creates or updates a metric filter and associates it with the specified log group. Metric filters allow you to configure
 * rules to extract metric data from log events ingested through
 *
 * <a>PutLogEvents</a>>
 *
 * The maximum number of metric filters that can be associated with a log group is
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutMetricFilterResponse * CloudWatchLogsClient::putMetricFilter(const PutMetricFilterRequest &request)
{
    return qobject_cast<PutMetricFilterResponse *>(send(request));
}

/*!
 * Creates or updates a resource policy allowing other AWS services to put log events to this account, such as Amazon Route
 * 53. An account can have up to 50 resource policies per
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutResourcePolicyResponse * CloudWatchLogsClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sets the retention of the specified log group. A retention policy allows you to configure the number of days for which
 * to retain log events in the specified log
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutRetentionPolicyResponse * CloudWatchLogsClient::putRetentionPolicy(const PutRetentionPolicyRequest &request)
{
    return qobject_cast<PutRetentionPolicyResponse *>(send(request));
}

/*!
 * Creates or updates a subscription filter and associates it with the specified log group. Subscription filters allow you
 * to subscribe to a real-time stream of log events ingested through <a>PutLogEvents</a> and have them delivered to a
 * specific destination. Currently, the supported destinations
 *
 * are> <ul> <li>
 *
 * An Amazon Kinesis stream belonging to the same account as the subscription filter, for same-account
 *
 * delivery> </li> <li>
 *
 * A logical destination that belongs to a different account, for cross-account
 *
 * delivery> </li> <li>
 *
 * An Amazon Kinesis Firehose delivery stream that belongs to the same account as the subscription filter, for same-account
 *
 * delivery> </li> <li>
 *
 * An AWS Lambda function that belongs to the same account as the subscription filter, for same-account
 *
 * delivery> </li> </ul>
 *
 * There can only be one subscription filter associated with a log group. If you are updating an existing filter, you must
 * specify the correct name in <code>filterName</code>. Otherwise, the call fails because you cannot associate a second
 * filter with a log
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutSubscriptionFilterResponse * CloudWatchLogsClient::putSubscriptionFilter(const PutSubscriptionFilterRequest &request)
{
    return qobject_cast<PutSubscriptionFilterResponse *>(send(request));
}

/*!
 * Adds or updates the specified tags for the specified log
 *
 * group>
 *
 * To list the tags for a log group, use <a>ListTagsLogGroup</a>. To remove tags, use
 *
 * <a>UntagLogGroup</a>>
 *
 * For more information about tags, see <a
 * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/log-group-tagging.html">Tag Log Groups in Amazon
 * CloudWatch Logs</a> in the <i>Amazon CloudWatch Logs User
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagLogGroupResponse * CloudWatchLogsClient::tagLogGroup(const TagLogGroupRequest &request)
{
    return qobject_cast<TagLogGroupResponse *>(send(request));
}

/*!
 * Tests the filter pattern of a metric filter against a sample of log event messages. You can use this operation to
 * validate the correctness of a metric filter
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TestMetricFilterResponse * CloudWatchLogsClient::testMetricFilter(const TestMetricFilterRequest &request)
{
    return qobject_cast<TestMetricFilterResponse *>(send(request));
}

/*!
 * Removes the specified tags from the specified log
 *
 * group>
 *
 * To list the tags for a log group, use <a>ListTagsLogGroup</a>. To add tags, use
 *
 * @param  request Request to send to Amazon CloudWatch Logs.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagLogGroupResponse * CloudWatchLogsClient::untagLogGroup(const UntagLogGroupRequest &request)
{
    return qobject_cast<UntagLogGroupResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  CloudWatchLogsClientPrivate
 *
 * @brief  Private implementation for CloudWatchLogsClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CloudWatchLogsClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudWatchLogsClient instance.
 */
CloudWatchLogsClientPrivate::CloudWatchLogsClientPrivate(CloudWatchLogsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudWatchLogs
} // namespace QtAws
