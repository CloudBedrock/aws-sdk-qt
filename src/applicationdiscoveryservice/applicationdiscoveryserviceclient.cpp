/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "applicationdiscoveryserviceclient.h"
#include "applicationdiscoveryserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "associateconfigurationitemstoapplicationrequest.h"
#include "associateconfigurationitemstoapplicationresponse.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "createtagsrequest.h"
#include "createtagsresponse.h"
#include "deleteapplicationsrequest.h"
#include "deleteapplicationsresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "describeagentsrequest.h"
#include "describeagentsresponse.h"
#include "describeconfigurationsrequest.h"
#include "describeconfigurationsresponse.h"
#include "describeexportconfigurationsrequest.h"
#include "describeexportconfigurationsresponse.h"
#include "describeexporttasksrequest.h"
#include "describeexporttasksresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "disassociateconfigurationitemsfromapplicationrequest.h"
#include "disassociateconfigurationitemsfromapplicationresponse.h"
#include "exportconfigurationsresponse.h"
#include "getdiscoverysummaryrequest.h"
#include "getdiscoverysummaryresponse.h"
#include "listconfigurationsrequest.h"
#include "listconfigurationsresponse.h"
#include "listserverneighborsrequest.h"
#include "listserverneighborsresponse.h"
#include "startdatacollectionbyagentidsrequest.h"
#include "startdatacollectionbyagentidsresponse.h"
#include "startexporttaskrequest.h"
#include "startexporttaskresponse.h"
#include "stopdatacollectionbyagentidsrequest.h"
#include "stopdatacollectionbyagentidsresponse.h"
#include "updateapplicationrequest.h"
#include "updateapplicationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ApplicationDiscoveryService
 * \brief The QtAws::ApplicationDiscoveryService contains stuff...
 *
 * \inmodule QtAwsApplicationDiscoveryService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ApplicationDiscoveryService {

/*!
 * \class QtAws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClient
 * \brief The ApplicationDiscoveryServiceClient class provides access to the AWS Application Discovery Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApplicationDiscoveryService
 *
 *  <fullname>AWS Application Discovery Service</fullname>
 * 
 *  AWS Application Discovery Service helps you plan application migration projects by automatically identifying servers,
 *  virtual machines (VMs), software, and software dependencies running in your on-premises data centers. Application
 *  Discovery Service also collects application performance data, which can help you assess the outcome of your migration.
 *  The data collected by Application Discovery Service is securely retained in an AWS-hosted and managed database in the
 *  cloud. You can export the data as a CSV or XML file into your preferred visualization tool or cloud-migration solution
 *  to plan your migration. For more information, see <a href="http://aws.amazon.com/application-discovery/faqs/">AWS
 *  Application Discovery Service
 * 
 *  FAQ</a>>
 * 
 *  Application Discovery Service offers two modes of
 * 
 *  operation> <ul> <li>
 * 
 *  <b>Agentless discovery</b> mode is recommended for environments that use VMware vCenter Server. This mode doesn't
 *  require you to install an agent on each host. Agentless discovery gathers server information regardless of the operating
 *  systems, which minimizes the time required for initial on-premises infrastructure assessment. Agentless discovery
 *  doesn't collect information about software and software dependencies. It also doesn't work in non-VMware environments.
 * 
 *  </p </li> <li>
 * 
 *  <b>Agent-based discovery</b> mode collects a richer set of data than agentless discovery by using the AWS Application
 *  Discovery Agent, which you install on one or more hosts in your data center. The agent captures infrastructure and
 *  application information, including an inventory of installed software applications, system and process performance,
 *  resource utilization, and network dependencies between workloads. The information collected by agents is secured at rest
 *  and in transit to the Application Discovery Service database in the cloud.
 * 
 *  </p </li> </ul>
 * 
 *  We recommend that you use agent-based discovery for non-VMware environments and to collect information about software
 *  and software dependencies. You can also run agent-based and agentless discovery simultaneously. Use agentless discovery
 *  to quickly complete the initial infrastructure assessment and then install agents on select
 * 
 *  hosts>
 * 
 *  Application Discovery Service integrates with application discovery solutions from AWS Partner Network (APN) partners.
 *  Third-party application discovery tools can query Application Discovery Service and write to the Application Discovery
 *  Service database using a public API. You can then import the data into either a visualization tool or cloud-migration
 * 
 *  solution> <b>
 * 
 *  Application Discovery Service doesn't gather sensitive information. All data is handled according to the <a
 *  href="http://aws.amazon.com/privacy/">AWS Privacy Policy</a>. You can operate Application Discovery Service offline to
 *  inspect collected data before it is shared with the
 * 
 *  service> </b>
 * 
 *  Your AWS account must be granted access to Application Discovery Service, a process called <i>whitelisting</i>. This is
 *  true for AWS partners and customers alike. To request access, <a
 *  href="http://aws.amazon.com/application-discovery/">sign up for Application Discovery Service</a>.
 * 
 *  </p
 * 
 *  This API reference provides descriptions, syntax, and usage examples for each of the actions and data types for
 *  Application Discovery Service. The topic for each action shows the API request parameters and the response.
 *  Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>>
 * 
 *  This guide is intended for use with the <a href="http://docs.aws.amazon.com/application-discovery/latest/userguide/">
 *  <i>AWS Application Discovery Service User Guide</i>
 */

/*!
 * \brief Constructs a ApplicationDiscoveryServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApplicationDiscoveryServiceClientPrivate(this), parent)
{
    Q_D(ApplicationDiscoveryServiceClient);
    d->apiVersion = QStringLiteral("2015-11-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("discovery");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Application Discovery Service");
    d->serviceName = QStringLiteral("discovery");
}

/*!
 * \overload ApplicationDiscoveryServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApplicationDiscoveryServiceClientPrivate(this), parent)
{
    Q_D(ApplicationDiscoveryServiceClient);
    d->apiVersion = QStringLiteral("2015-11-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("discovery");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Application Discovery Service");
    d->serviceName = QStringLiteral("discovery");
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * AssociateConfigurationItemsToApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates one or more configuration items with an
 */
AssociateConfigurationItemsToApplicationResponse * ApplicationDiscoveryServiceClient::associateConfigurationItemsToApplication(const AssociateConfigurationItemsToApplicationRequest &request)
{
    return qobject_cast<AssociateConfigurationItemsToApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an application with the given name and
 */
CreateApplicationResponse * ApplicationDiscoveryServiceClient::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * CreateTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates one or more tags for configuration items. Tags are metadata that help you categorize IT assets. This API accepts
 * a list of multiple configuration
 */
CreateTagsResponse * ApplicationDiscoveryServiceClient::createTags(const CreateTagsRequest &request)
{
    return qobject_cast<CreateTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DeleteApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a list of applications and their associations with configuration
 */
DeleteApplicationsResponse * ApplicationDiscoveryServiceClient::deleteApplications(const DeleteApplicationsRequest &request)
{
    return qobject_cast<DeleteApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the association between configuration items and one or more tags. This API accepts a list of multiple
 * configuration
 */
DeleteTagsResponse * ApplicationDiscoveryServiceClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DescribeAgentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists agents or the Connector by ID or lists all agents/Connectors associated with your user account if you did not
 * specify an
 */
DescribeAgentsResponse * ApplicationDiscoveryServiceClient::describeAgents(const DescribeAgentsRequest &request)
{
    return qobject_cast<DescribeAgentsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DescribeConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves attributes for a list of configuration item IDs. All of the supplied IDs must be for the same asset type
 * (server, application, process, or connection). Output fields are specific to the asset type selected. For example, the
 * output for a <i>server</i> configuration item includes a list of attributes about the server, such as host name,
 * operating system, and number of network
 *
 * cards>
 *
 * For a complete list of outputs for each asset type, see <a
 * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#DescribeConfigurations">Using
 * the DescribeConfigurations
 */
DescribeConfigurationsResponse * ApplicationDiscoveryServiceClient::describeConfigurations(const DescribeConfigurationsRequest &request)
{
    return qobject_cast<DescribeConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DescribeExportConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecated. Use <code>DescribeExportTasks</code>
 *
 * instead>
 *
 * Retrieves the status of a given export process. You can retrieve status from a maximum of 100
 */
DescribeExportConfigurationsResponse * ApplicationDiscoveryServiceClient::describeExportConfigurations(const DescribeExportConfigurationsRequest &request)
{
    return qobject_cast<DescribeExportConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DescribeExportTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve status of one or more export tasks. You can retrieve the status of up to 100 export
 */
DescribeExportTasksResponse * ApplicationDiscoveryServiceClient::describeExportTasks(const DescribeExportTasksRequest &request)
{
    return qobject_cast<DescribeExportTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DescribeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of configuration items that are tagged with a specific tag. Or retrieves a list of all tags assigned to
 * a specific configuration
 */
DescribeTagsResponse * ApplicationDiscoveryServiceClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * DisassociateConfigurationItemsFromApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates one or more configuration items from an
 */
DisassociateConfigurationItemsFromApplicationResponse * ApplicationDiscoveryServiceClient::disassociateConfigurationItemsFromApplication(const DisassociateConfigurationItemsFromApplicationRequest &request)
{
    return qobject_cast<DisassociateConfigurationItemsFromApplicationResponse *>(send(request));
}

/*!
 * Sends a ExportConfigurations request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * ExportConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecated. Use <code>StartExportTask</code>
 *
 * instead>
 *
 * Exports all discovered configuration data to an Amazon S3 bucket or an application that enables you to view and evaluate
 * the data. Data includes tags and tag associations, processes, connections, servers, and system performance. This API
 * returns an export ID that you can query using the <i>DescribeExportConfigurations</i> API. The system imposes a limit of
 * two configuration exports in six
 */
ExportConfigurationsResponse * ApplicationDiscoveryServiceClient::exportConfigurations()
{
    return qobject_cast<ExportConfigurationsResponse *>(send());
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * GetDiscoverySummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a short summary of discovered
 */
GetDiscoverySummaryResponse * ApplicationDiscoveryServiceClient::getDiscoverySummary(const GetDiscoverySummaryRequest &request)
{
    return qobject_cast<GetDiscoverySummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * ListConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of configuration items according to criteria that you specify in a filter. The filter criteria
 * identifies the relationship
 */
ListConfigurationsResponse * ApplicationDiscoveryServiceClient::listConfigurations(const ListConfigurationsRequest &request)
{
    return qobject_cast<ListConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * ListServerNeighborsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of servers that are one network hop away from a specified
 */
ListServerNeighborsResponse * ApplicationDiscoveryServiceClient::listServerNeighbors(const ListServerNeighborsRequest &request)
{
    return qobject_cast<ListServerNeighborsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * StartDataCollectionByAgentIdsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Instructs the specified agents or connectors to start collecting
 */
StartDataCollectionByAgentIdsResponse * ApplicationDiscoveryServiceClient::startDataCollectionByAgentIds(const StartDataCollectionByAgentIdsRequest &request)
{
    return qobject_cast<StartDataCollectionByAgentIdsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * StartExportTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Begins the export of discovered data to an S3
 *
 * bucket>
 *
 * If you specify <code>agentIds</code> in a filter, the task exports up to 72 hours of detailed data collected by the
 * identified Application Discovery Agent, including network, process, and performance details. A time range for exported
 * agent data may be set by using <code>startTime</code> and <code>endTime</code>. Export of detailed agent data is limited
 * to five concurrently running exports.
 *
 * </p
 *
 * If you do not include an <code>agentIds</code> filter, summary data is exported that includes both AWS Agentless
 * Discovery Connector data and summary data from AWS Discovery Agents. Export of summary data is limited to two exports
 * per day.
 */
StartExportTaskResponse * ApplicationDiscoveryServiceClient::startExportTask(const StartExportTaskRequest &request)
{
    return qobject_cast<StartExportTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * StopDataCollectionByAgentIdsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Instructs the specified agents or connectors to stop collecting
 */
StopDataCollectionByAgentIdsResponse * ApplicationDiscoveryServiceClient::stopDataCollectionByAgentIds(const StopDataCollectionByAgentIdsRequest &request)
{
    return qobject_cast<StopDataCollectionByAgentIdsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationDiscoveryServiceClient service, and returns a pointer to an
 * UpdateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates metadata about an
 */
UpdateApplicationResponse * ApplicationDiscoveryServiceClient::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * \class QtAws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClientPrivate
 * \brief The ApplicationDiscoveryServiceClientPrivate class provides private implementation for ApplicationDiscoveryServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApplicationDiscoveryService
 */

/*!
 * Constructs a ApplicationDiscoveryServiceClientPrivate object with public implementation \a q.
 */
ApplicationDiscoveryServiceClientPrivate::ApplicationDiscoveryServiceClientPrivate(ApplicationDiscoveryServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
