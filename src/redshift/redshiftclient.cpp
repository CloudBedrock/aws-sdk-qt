/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "redshiftclient.h"
#include "redshiftclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Redshift {

/**
 * @class  RedshiftClient
 *
 * @brief  Client for Amazon Redshift
 *
 * <fullname>Amazon Redshift</fullname>
 *
 * <b>Overview</b>
 *
 * </p
 *
 * This is an interface reference for Amazon Redshift. It contains documentation for one of the programming or command line
 * interfaces you can use to manage Amazon Redshift clusters. Note that Amazon Redshift is asynchronous, which means that
 * some interfaces may require techniques, such as polling or asynchronous callback handlers, to determine when a command
 * has been applied. In this reference, the parameter descriptions indicate whether a change is applied immediately, on the
 * next instance reboot, or during the next maintenance window. For a summary of the Amazon Redshift cluster management
 * interfaces, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon Redshift
 * Management
 *
 * Interfaces</a>>
 *
 * Amazon Redshift manages all the work of setting up, operating, and scaling a data warehouse: provisioning capacity,
 * monitoring and backing up the cluster, and applying patches and upgrades to the Amazon Redshift engine. You can focus on
 * using your data to acquire new insights for your business and
 *
 * customers>
 *
 * If you are a first-time user of Amazon Redshift, we recommend that you begin by reading the <a
 * href="http://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started
 *
 * Guide</a>>
 *
 * If you are a database developer, the <a href="http://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
 * Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your
 * data warehouse.
 */

/**
 * @brief  Constructs a new RedshiftClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
RedshiftClient::RedshiftClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new RedshiftClientPrivate(this), parent)
{
    Q_D(RedshiftClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("redshift");
}

/**
 * @brief  Constructs a new RedshiftClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
RedshiftClient::RedshiftClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new RedshiftClientPrivate(this), parent)
{
    Q_D(RedshiftClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("redshift");
}

/// @todo override getEndpoint() to use redshift.

/**
 * Adds an inbound (ingress) rule to an Amazon Redshift security group. Depending on whether the application accessing your
 * cluster is running on the Internet or an Amazon EC2 instance, you can authorize inbound access to either a Classless
 * Interdomain Routing (CIDR)/Internet Protocol (IP) range or to an Amazon EC2 security group. You can add as many as 20
 * ingress rules to an Amazon Redshift security
 *
 * group>
 *
 * If you authorize access to an Amazon EC2 security group, specify <i>EC2SecurityGroupName</i> and
 * <i>EC2SecurityGroupOwnerId</i>. The Amazon EC2 security group and Amazon Redshift cluster must be in the same AWS
 * region.
 *
 * </p
 *
 * If you authorize access to a CIDR/IP address range, specify <i>CIDRIP</i>. For an overview of CIDR blocks, see the
 * Wikipedia article on <a href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless Inter-Domain
 * Routing</a>.
 *
 * </p
 *
 * You must also associate the security group with a cluster so that clients running on these IP addresses or the EC2
 * instance are authorized to connect to the cluster. For information about managing security groups, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Working with Security
 * Groups</a> in the <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AuthorizeClusterSecurityGroupIngressResponse * RedshiftClient::authorizeClusterSecurityGroupIngress(const AuthorizeClusterSecurityGroupIngressRequest &request)
{

}

/**
 * Authorizes the specified AWS customer account to restore the specified
 *
 * snapshot>
 *
 * For more information about working with snapshots, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AuthorizeSnapshotAccessResponse * RedshiftClient::authorizeSnapshotAccess(const AuthorizeSnapshotAccessRequest &request)
{

}

/**
 * Copies the specified automated cluster snapshot to a new manual cluster snapshot. The source must be an automated
 * snapshot and it must be in the available
 *
 * state>
 *
 * When you delete a cluster, Amazon Redshift deletes any automated snapshots of the cluster. Also, when the retention
 * period of the snapshot expires, Amazon Redshift automatically deletes it. If you want to keep an automated snapshot for
 * a longer period, you can make a manual copy of the snapshot. Manual snapshots are retained until you delete
 *
 * them>
 *
 * For more information about working with snapshots, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CopyClusterSnapshotResponse * RedshiftClient::copyClusterSnapshot(const CopyClusterSnapshotRequest &request)
{

}

/**
 * Creates a new
 *
 * cluster>
 *
 * To create the cluster in Virtual Private Cloud (VPC), you must provide a cluster subnet group name. The cluster subnet
 * group identifies the subnets of your VPC that Amazon Redshift uses when creating the cluster. For more information about
 * managing clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
 * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateClusterResponse * RedshiftClient::createCluster(const CreateClusterRequest &request)
{

}

/**
 * Creates an Amazon Redshift parameter
 *
 * group>
 *
 * Creating parameter groups is independent of creating clusters. You can associate a cluster with a parameter group when
 * you create the cluster. You can also associate an existing cluster with a parameter group after the cluster is created
 * by using <a>ModifyCluster</a>.
 *
 * </p
 *
 * Parameters in the parameter group define specific behavior that applies to the databases you create on the cluster. For
 * more information about parameters and parameter groups, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter
 * Groups</a> in the <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateClusterParameterGroupResponse * RedshiftClient::createClusterParameterGroup(const CreateClusterParameterGroupRequest &request)
{

}

/**
 * Creates a new Amazon Redshift security group. You use security groups to control access to non-VPC
 *
 * clusters>
 *
 * For information about managing security groups, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster
 * Security Groups</a> in the <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateClusterSecurityGroupResponse * RedshiftClient::createClusterSecurityGroup(const CreateClusterSecurityGroupRequest &request)
{

}

/**
 * Creates a manual snapshot of the specified cluster. The cluster must be in the <code>available</code> state.
 *
 * </p
 *
 * For more information about working with snapshots, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateClusterSnapshotResponse * RedshiftClient::createClusterSnapshot(const CreateClusterSnapshotRequest &request)
{

}

/**
 * Creates a new Amazon Redshift subnet group. You must provide a list of one or more subnets in your existing Amazon
 * Virtual Private Cloud (Amazon VPC) when creating Amazon Redshift subnet
 *
 * group>
 *
 * For information about subnet groups, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-cluster-subnet-groups.html">Amazon Redshift Cluster
 * Subnet Groups</a> in the <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateClusterSubnetGroupResponse * RedshiftClient::createClusterSubnetGroup(const CreateClusterSubnetGroupRequest &request)
{

}

/**
 * Creates an Amazon Redshift event notification subscription. This action requires an ARN (Amazon Resource Name) of an
 * Amazon SNS topic created by either the Amazon Redshift console, the Amazon SNS console, or the Amazon SNS API. To obtain
 * an ARN with Amazon SNS, you must create a topic in Amazon SNS and subscribe to the topic. The ARN is displayed in the
 * SNS
 *
 * console>
 *
 * You can specify the source type, and lists of Amazon Redshift source IDs, event categories, and event severities.
 * Notifications will be sent for all events you want that match those criteria. For example, you can specify source type =
 * cluster, source ID = my-cluster-1 and mycluster2, event categories = Availability, Backup, and severity = ERROR. The
 * subscription will only send notifications for those ERROR events in the Availability and Backup categories for the
 * specified
 *
 * clusters>
 *
 * If you specify both the source type and source IDs, such as source type = cluster and source identifier = my-cluster-1,
 * notifications will be sent for all the cluster events for my-cluster-1. If you specify a source type but do not specify
 * a source identifier, you will receive notice of the events for the objects of that type in your AWS account. If you do
 * not specify either the SourceType nor the SourceIdentifier, you will be notified of events generated from all Amazon
 * Redshift sources belonging to your AWS account. You must specify a source type if you specify a source
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateEventSubscriptionResponse * RedshiftClient::createEventSubscription(const CreateEventSubscriptionRequest &request)
{

}

/**
 * Creates an HSM client certificate that an Amazon Redshift cluster will use to connect to the client's HSM in order to
 * store and retrieve the keys used to encrypt the cluster
 *
 * databases>
 *
 * The command returns a public key, which you must store in the HSM. In addition to creating the HSM certificate, you must
 * create an Amazon Redshift HSM configuration that provides a cluster the information needed to store and use encryption
 * keys in the HSM. For more information, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware Security Modules</a> in the Amazon
 * Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateHsmClientCertificateResponse * RedshiftClient::createHsmClientCertificate(const CreateHsmClientCertificateRequest &request)
{

}

/**
 * Creates an HSM configuration that contains the information required by an Amazon Redshift cluster to store and use
 * database encryption keys in a Hardware Security Module (HSM). After creating the HSM configuration, you can specify it
 * as a parameter when creating a cluster. The cluster will then store its encryption keys in the
 *
 * HSM>
 *
 * In addition to creating an HSM configuration, you must also create an HSM client certificate. For more information, go
 * to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware Security Modules</a> in the
 * Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateHsmConfigurationResponse * RedshiftClient::createHsmConfiguration(const CreateHsmConfigurationRequest &request)
{

}

/**
 * Creates a snapshot copy grant that permits Amazon Redshift to use a customer master key (CMK) from AWS Key Management
 * Service (AWS KMS) to encrypt copied snapshots in a destination
 *
 * region>
 *
 * For more information about managing snapshot copy grants, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon Redshift Database
 * Encryption</a> in the <i>Amazon Redshift Cluster Management Guide</i>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSnapshotCopyGrantResponse * RedshiftClient::createSnapshotCopyGrant(const CreateSnapshotCopyGrantRequest &request)
{

}

/**
 * Adds one or more tags to a specified
 *
 * resource>
 *
 * A resource can have up to 10 tags. If you try to create more than 10 tags for a resource, you will receive an error and
 * the attempt will
 *
 * fail>
 *
 * If you specify a key that already exists for the resource, the value for that key will be updated with the new
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTagsResponse * RedshiftClient::createTags(const CreateTagsRequest &request)
{

}

/**
 * Deletes a previously provisioned cluster. A successful response from the web service indicates that the request was
 * received correctly. Use <a>DescribeClusters</a> to monitor the status of the deletion. The delete operation cannot be
 * canceled or reverted once submitted. For more information about managing clusters, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * Guide</i>>
 *
 * If you want to shut down the cluster and retain it for future use, set <i>SkipFinalClusterSnapshot</i> to
 * <code>false</code> and specify a name for <i>FinalClusterSnapshotIdentifier</i>. You can later restore this snapshot to
 * resume using the cluster. If a final cluster snapshot is requested, the status of the cluster will be "final-snapshot"
 * while the snapshot is being taken, then it's "deleting" once Amazon Redshift begins deleting the cluster.
 *
 * </p
 *
 * For more information about managing clusters, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteClusterResponse * RedshiftClient::deleteCluster(const DeleteClusterRequest &request)
{

}

/**
 * Deletes a specified Amazon Redshift parameter
 *
 * group> <note>
 *
 * You cannot delete a parameter group if it is associated with a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteClusterParameterGroupResponse * RedshiftClient::deleteClusterParameterGroup(const DeleteClusterParameterGroupRequest &request)
{

}

/**
 * Deletes an Amazon Redshift security
 *
 * group> <note>
 *
 * You cannot delete a security group that is associated with any clusters. You cannot delete the default security
 *
 * group> </note>
 *
 * For information about managing security groups, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster
 * Security Groups</a> in the <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteClusterSecurityGroupResponse * RedshiftClient::deleteClusterSecurityGroup(const DeleteClusterSecurityGroupRequest &request)
{

}

/**
 * Deletes the specified manual snapshot. The snapshot must be in the <code>available</code> state, with no other users
 * authorized to access the snapshot.
 *
 * </p
 *
 * Unlike automated snapshots, manual snapshots are retained even after you delete your cluster. Amazon Redshift does not
 * delete your manual snapshots. You must delete manual snapshot explicitly to avoid getting charged. If other accounts are
 * authorized to access the snapshot, you must revoke all of the authorizations before you can delete the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteClusterSnapshotResponse * RedshiftClient::deleteClusterSnapshot(const DeleteClusterSnapshotRequest &request)
{

}

/**
 * Deletes the specified cluster subnet
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteClusterSubnetGroupResponse * RedshiftClient::deleteClusterSubnetGroup(const DeleteClusterSubnetGroupRequest &request)
{

}

/**
 * Deletes an Amazon Redshift event notification
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEventSubscriptionResponse * RedshiftClient::deleteEventSubscription(const DeleteEventSubscriptionRequest &request)
{

}

/**
 * Deletes the specified HSM client
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteHsmClientCertificateResponse * RedshiftClient::deleteHsmClientCertificate(const DeleteHsmClientCertificateRequest &request)
{

}

/**
 * Deletes the specified Amazon Redshift HSM
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteHsmConfigurationResponse * RedshiftClient::deleteHsmConfiguration(const DeleteHsmConfigurationRequest &request)
{

}

/**
 * Deletes the specified snapshot copy
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSnapshotCopyGrantResponse * RedshiftClient::deleteSnapshotCopyGrant(const DeleteSnapshotCopyGrantRequest &request)
{

}

/**
 * Deletes a tag or tags from a resource. You must provide the ARN of the resource from which you want to delete the tag or
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTagsResponse * RedshiftClient::deleteTags(const DeleteTagsRequest &request)
{

}

/**
 * Returns a list of Amazon Redshift parameter groups, including parameter groups you created and the default parameter
 * group. For each parameter group, the response includes the parameter group name, description, and parameter group family
 * name. You can optionally specify a name to retrieve the description of a specific parameter
 *
 * group>
 *
 * For more information about parameters and parameter groups, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter
 * Groups</a> in the <i>Amazon Redshift Cluster Management
 *
 * Guide</i>>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all parameter groups that match
 * any combination of the specified keys and values. For example, if you have <code>owner</code> and
 * <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all parameter groups
 * that have any combination of those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, parameter groups are returned regardless of whether they have
 * tag keys or values associated with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeClusterParameterGroupsResponse * RedshiftClient::describeClusterParameterGroups(const DescribeClusterParameterGroupsRequest &request)
{

}

/**
 * Returns a detailed list of parameters contained within the specified Amazon Redshift parameter group. For each parameter
 * the response includes information such as parameter name, description, data type, value, whether the parameter value is
 * modifiable, and so
 *
 * on>
 *
 * You can specify <i>source</i> filter to retrieve parameters of only specific type. For example, to retrieve parameters
 * that were modified by a user action such as from <a>ModifyClusterParameterGroup</a>, you can specify <i>source</i> equal
 * to
 *
 * <i>user</i>>
 *
 * For more information about parameters and parameter groups, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter
 * Groups</a> in the <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeClusterParametersResponse * RedshiftClient::describeClusterParameters(const DescribeClusterParametersRequest &request)
{

}

/**
 * Returns information about Amazon Redshift security groups. If the name of a security group is specified, the response
 * will contain only information about only that security
 *
 * group>
 *
 * For information about managing security groups, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon Redshift Cluster
 * Security Groups</a> in the <i>Amazon Redshift Cluster Management
 *
 * Guide</i>>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all security groups that match
 * any combination of the specified keys and values. For example, if you have <code>owner</code> and
 * <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all security groups
 * that have any combination of those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, security groups are returned regardless of whether they have
 * tag keys or values associated with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeClusterSecurityGroupsResponse * RedshiftClient::describeClusterSecurityGroups(const DescribeClusterSecurityGroupsRequest &request)
{

}

/**
 * Returns one or more snapshot objects, which contain metadata about your cluster snapshots. By default, this operation
 * returns information about all snapshots of all clusters that are owned by you AWS customer account. No information is
 * returned for snapshots owned by inactive AWS customer
 *
 * accounts>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all snapshots that match any
 * combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code>
 * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all snapshots that have any combination of
 * those values are returned. Only snapshots that you own are returned in the response; shared snapshots are not returned
 * with the tag key and tag value request
 *
 * parameters>
 *
 * If both tag keys and values are omitted from the request, snapshots are returned regardless of whether they have tag
 * keys or values associated with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeClusterSnapshotsResponse * RedshiftClient::describeClusterSnapshots(const DescribeClusterSnapshotsRequest &request)
{

}

/**
 * Returns one or more cluster subnet group objects, which contain metadata about your cluster subnet groups. By default,
 * this operation returns information about all cluster subnet groups that are defined in you AWS
 *
 * account>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all subnet groups that match
 * any combination of the specified keys and values. For example, if you have <code>owner</code> and
 * <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all subnet groups
 * that have any combination of those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, subnet groups are returned regardless of whether they have tag
 * keys or values associated with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeClusterSubnetGroupsResponse * RedshiftClient::describeClusterSubnetGroups(const DescribeClusterSubnetGroupsRequest &request)
{

}

/**
 * Returns descriptions of the available Amazon Redshift cluster versions. You can call this operation even before creating
 * any clusters to learn more about the Amazon Redshift versions. For more information about managing clusters, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeClusterVersionsResponse * RedshiftClient::describeClusterVersions(const DescribeClusterVersionsRequest &request)
{

}

/**
 * Returns properties of provisioned clusters including general cluster properties, cluster database properties,
 * maintenance and backup properties, and security and access properties. This operation supports pagination. For more
 * information about managing clusters, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * Guide</i>>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all clusters that match any
 * combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code>
 * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all clusters that have any combination of
 * those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, clusters are returned regardless of whether they have tag keys
 * or values associated with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeClustersResponse * RedshiftClient::describeClusters(const DescribeClustersRequest &request)
{

}

/**
 * Returns a list of parameter settings for the specified parameter group
 *
 * family>
 *
 * For more information about parameters and parameter groups, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter
 * Groups</a> in the <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDefaultClusterParametersResponse * RedshiftClient::describeDefaultClusterParameters(const DescribeDefaultClusterParametersRequest &request)
{

}

/**
 * Displays a list of event categories for all event source types, or for a specified source type. For a list of the event
 * categories and source types, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-event-notifications.html">Amazon Redshift Event
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventCategoriesResponse * RedshiftClient::describeEventCategories(const DescribeEventCategoriesRequest &request)
{

}

/**
 * Lists descriptions of all the Amazon Redshift event notification subscriptions for a customer account. If you specify a
 * subscription name, lists the description for that
 *
 * subscription>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all event notification
 * subscriptions that match any combination of the specified keys and values. For example, if you have <code>owner</code>
 * and <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all
 * subscriptions that have any combination of those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, subscriptions are returned regardless of whether they have tag
 * keys or values associated with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventSubscriptionsResponse * RedshiftClient::describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request)
{

}

/**
 * Returns events related to clusters, security groups, snapshots, and parameter groups for the past 14 days. Events
 * specific to a particular cluster, security group, snapshot or parameter group can be obtained by providing the name as a
 * parameter. By default, the past hour of events are
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventsResponse * RedshiftClient::describeEvents(const DescribeEventsRequest &request)
{

}

/**
 * Returns information about the specified HSM client certificate. If no certificate ID is specified, returns information
 * about all the HSM certificates owned by your AWS customer
 *
 * account>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all HSM client certificates
 * that match any combination of the specified keys and values. For example, if you have <code>owner</code> and
 * <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all HSM client
 * certificates that have any combination of those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, HSM client certificates are returned regardless of whether
 * they have tag keys or values associated with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeHsmClientCertificatesResponse * RedshiftClient::describeHsmClientCertificates(const DescribeHsmClientCertificatesRequest &request)
{

}

/**
 * Returns information about the specified Amazon Redshift HSM configuration. If no configuration ID is specified, returns
 * information about all the HSM configurations owned by your AWS customer
 *
 * account>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all HSM connections that match
 * any combination of the specified keys and values. For example, if you have <code>owner</code> and
 * <code>environment</code> for tag keys, and <code>admin</code> and <code>test</code> for tag values, all HSM connections
 * that have any combination of those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, HSM connections are returned regardless of whether they have
 * tag keys or values associated with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeHsmConfigurationsResponse * RedshiftClient::describeHsmConfigurations(const DescribeHsmConfigurationsRequest &request)
{

}

/**
 * Describes whether information, such as queries and connection attempts, is being logged for the specified Amazon
 * Redshift
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLoggingStatusResponse * RedshiftClient::describeLoggingStatus(const DescribeLoggingStatusRequest &request)
{

}

/**
 * Returns a list of orderable cluster options. Before you create a new cluster you can use this operation to find what
 * options are available, such as the EC2 Availability Zones (AZ) in the specific AWS region that you can specify, and the
 * node types you can request. The node types differ by available storage, memory, CPU and price. With the cost involved
 * you might want to obtain a list of cluster options in the specific region and specify values when creating a cluster.
 * For more information about managing clusters, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeOrderableClusterOptionsResponse * RedshiftClient::describeOrderableClusterOptions(const DescribeOrderableClusterOptionsRequest &request)
{

}

/**
 * Returns a list of the available reserved node offerings by Amazon Redshift with their descriptions including the node
 * type, the fixed and recurring costs of reserving the node and duration the node will be reserved for you. These
 * descriptions help you determine which reserve node offering you want to purchase. You then use the unique offering ID in
 * you call to <a>PurchaseReservedNodeOffering</a> to reserve one or more nodes for your Amazon Redshift cluster.
 *
 * </p
 *
 * For more information about reserved node offerings, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing Reserved
 * Nodes</a> in the <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReservedNodeOfferingsResponse * RedshiftClient::describeReservedNodeOfferings(const DescribeReservedNodeOfferingsRequest &request)
{

}

/**
 * Returns the descriptions of the reserved
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReservedNodesResponse * RedshiftClient::describeReservedNodes(const DescribeReservedNodesRequest &request)
{

}

/**
 * Returns information about the last resize operation for the specified cluster. If no resize operation has ever been
 * initiated for the specified cluster, a <code>HTTP 404</code> error is returned. If a resize operation was initiated and
 * completed, the status of the resize remains as <code>SUCCEEDED</code> until the next resize.
 *
 * </p
 *
 * A resize operation can be requested using <a>ModifyCluster</a> and specifying a different number or type of nodes for
 * the cluster.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeResizeResponse * RedshiftClient::describeResize(const DescribeResizeRequest &request)
{

}

/**
 * Returns a list of snapshot copy grants owned by the AWS account in the destination
 *
 * region>
 *
 * For more information about managing snapshot copy grants, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon Redshift Database
 * Encryption</a> in the <i>Amazon Redshift Cluster Management Guide</i>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeSnapshotCopyGrantsResponse * RedshiftClient::describeSnapshotCopyGrants(const DescribeSnapshotCopyGrantsRequest &request)
{

}

/**
 * Lists the status of one or more table restore requests made using the <a>RestoreTableFromClusterSnapshot</a> API action.
 * If you don't specify a value for the <code>TableRestoreRequestId</code> parameter, then
 * <code>DescribeTableRestoreStatus</code> returns the status of all table restore requests ordered by the date and time of
 * the request in ascending order. Otherwise <code>DescribeTableRestoreStatus</code> returns the status of the table
 * specified by
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTableRestoreStatusResponse * RedshiftClient::describeTableRestoreStatus(const DescribeTableRestoreStatusRequest &request)
{

}

/**
 * Returns a list of tags. You can return tags from a specific resource by specifying an ARN, or you can return all tags
 * for a given type of resource, such as clusters, snapshots, and so
 *
 * on>
 *
 * The following are limitations for <code>DescribeTags</code>:
 *
 * </p <ul> <li>
 *
 * You cannot specify an ARN and a resource-type value together in the same
 *
 * request> </li> <li>
 *
 * You cannot use the <code>MaxRecords</code> and <code>Marker</code> parameters together with the ARN
 *
 * parameter> </li> <li>
 *
 * The <code>MaxRecords</code> parameter can be a range from 10 to 50 results to return in a
 *
 * request> </li> </ul>
 *
 * If you specify both tag keys and tag values in the same request, Amazon Redshift returns all resources that match any
 * combination of the specified keys and values. For example, if you have <code>owner</code> and <code>environment</code>
 * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all resources that have any combination of
 * those values are
 *
 * returned>
 *
 * If both tag keys and values are omitted from the request, resources are returned regardless of whether they have tag
 * keys or values associated with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTagsResponse * RedshiftClient::describeTags(const DescribeTagsRequest &request)
{

}

/**
 * Stops logging information, such as queries and connection attempts, for the specified Amazon Redshift
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableLoggingResponse * RedshiftClient::disableLogging(const DisableLoggingRequest &request)
{

}

/**
 * Disables the automatic copying of snapshots from one region to another region for a specified
 *
 * cluster>
 *
 * If your cluster and its snapshots are encrypted using a customer master key (CMK) from AWS KMS, use
 * <a>DeleteSnapshotCopyGrant</a> to delete the grant that grants Amazon Redshift permission to the CMK in the destination
 * region.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableSnapshotCopyResponse * RedshiftClient::disableSnapshotCopy(const DisableSnapshotCopyRequest &request)
{

}

/**
 * Starts logging information, such as queries and connection attempts, for the specified Amazon Redshift
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableLoggingResponse * RedshiftClient::enableLogging(const EnableLoggingRequest &request)
{

}

/**
 * Enables the automatic copy of snapshots from one region to another region for a specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableSnapshotCopyResponse * RedshiftClient::enableSnapshotCopy(const EnableSnapshotCopyRequest &request)
{

}

/**
 * Returns a database user name and temporary password with temporary authorization to log on to an Amazon Redshift
 * database. The action returns the database user name prefixed with <code>IAM:</code> if <code>AutoCreate</code> is
 * <code>False</code> or <code>IAMA:</code> if <code>AutoCreate</code> is <code>True</code>. You can optionally specify one
 * or more database user groups that the user will join at log on. By default, the temporary credentials expire in 900
 * seconds. You can optionally specify a duration between 900 seconds (15 minutes) and 3600 seconds (60 minutes). For more
 * information, see <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/generating-user-credentials.html">Using IAM
 * Authentication to Generate Database User Credentials</a> in the Amazon Redshift Cluster Management
 *
 * Guide>
 *
 * The AWS Identity and Access Management (IAM)user or role that executes GetClusterCredentials must have an IAM policy
 * attached that allows access to all necessary actions and resources. For more information about permissions, see <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html#redshift-policy-resources.getclustercredentials-resources">Resource
 * Policies for GetClusterCredentials</a> in the Amazon Redshift Cluster Management
 *
 * Guide>
 *
 * If the <code>DbGroups</code> parameter is specified, the IAM policy must allow the <code>redshift:JoinGroup</code>
 * action with access to the listed <code>dbgroups</code>.
 *
 * </p
 *
 * In addition, if the <code>AutoCreate</code> parameter is set to <code>True</code>, then the policy must include the
 * <code>redshift:CreateClusterUser</code>
 *
 * privilege>
 *
 * If the <code>DbName</code> parameter is specified, the IAM policy must allow access to the resource <code>dbname</code>
 * for the specified database name.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetClusterCredentialsResponse * RedshiftClient::getClusterCredentials(const GetClusterCredentialsRequest &request)
{

}

/**
 * Modifies the settings for a cluster. For example, you can add another security or parameter group, update the preferred
 * maintenance window, or change the master user password. Resetting a cluster password or modifying the security groups
 * associated with a cluster do not need a reboot. However, modifying a parameter group requires a reboot for parameters to
 * take effect. For more information about managing clusters, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift Clusters</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * Guide</i>>
 *
 * You can also change node type and the number of nodes to scale up or down the cluster. When resizing a cluster, you must
 * specify both the number of nodes and the node type even if one of the parameters does not
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyClusterResponse * RedshiftClient::modifyCluster(const ModifyClusterRequest &request)
{

}

/**
 * Modifies the list of AWS Identity and Access Management (IAM) roles that can be used by the cluster to access other AWS
 *
 * services>
 *
 * A cluster can have up to 10 IAM roles associated at any
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyClusterIamRolesResponse * RedshiftClient::modifyClusterIamRoles(const ModifyClusterIamRolesRequest &request)
{

}

/**
 * Modifies the parameters of a parameter
 *
 * group>
 *
 * For more information about parameters and parameter groups, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon Redshift Parameter
 * Groups</a> in the <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyClusterParameterGroupResponse * RedshiftClient::modifyClusterParameterGroup(const ModifyClusterParameterGroupRequest &request)
{

}

/**
 * Modifies a cluster subnet group to include the specified list of VPC subnets. The operation replaces the existing list
 * of subnets with the new list of
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyClusterSubnetGroupResponse * RedshiftClient::modifyClusterSubnetGroup(const ModifyClusterSubnetGroupRequest &request)
{

}

/**
 * Modifies an existing Amazon Redshift event notification
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyEventSubscriptionResponse * RedshiftClient::modifyEventSubscription(const ModifyEventSubscriptionRequest &request)
{

}

/**
 * Modifies the number of days to retain automated snapshots in the destination region after they are copied from the
 * source
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifySnapshotCopyRetentionPeriodResponse * RedshiftClient::modifySnapshotCopyRetentionPeriod(const ModifySnapshotCopyRetentionPeriodRequest &request)
{

}

/**
 * Allows you to purchase reserved nodes. Amazon Redshift offers a predefined set of reserved node offerings. You can
 * purchase one or more of the offerings. You can call the <a>DescribeReservedNodeOfferings</a> API to obtain the available
 * reserved node offerings. You can call this API by providing a specific reserved node offering and the number of nodes
 * you want to reserve.
 *
 * </p
 *
 * For more information about reserved node offerings, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing Reserved
 * Nodes</a> in the <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PurchaseReservedNodeOfferingResponse * RedshiftClient::purchaseReservedNodeOffering(const PurchaseReservedNodeOfferingRequest &request)
{

}

/**
 * Reboots a cluster. This action is taken as soon as possible. It results in a momentary outage to the cluster, during
 * which the cluster status is set to <code>rebooting</code>. A cluster event is created when the reboot is completed. Any
 * pending cluster modifications (see <a>ModifyCluster</a>) are applied at this reboot. For more information about managing
 * clusters, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon Redshift
 * Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RebootClusterResponse * RedshiftClient::rebootCluster(const RebootClusterRequest &request)
{

}

/**
 * Sets one or more parameters of the specified parameter group to their default values and sets the source values of the
 * parameters to "engine-default". To reset the entire parameter group specify the <i>ResetAllParameters</i> parameter. For
 * parameter changes to take effect you must reboot any associated clusters.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResetClusterParameterGroupResponse * RedshiftClient::resetClusterParameterGroup(const ResetClusterParameterGroupRequest &request)
{

}

/**
 * Creates a new cluster from a snapshot. By default, Amazon Redshift creates the resulting cluster with the same
 * configuration as the original cluster from which the snapshot was created, except that the new cluster is created with
 * the default cluster security and parameter groups. After Amazon Redshift creates the cluster, you can use the
 * <a>ModifyCluster</a> API to associate a different security group and different parameter group with the restored
 * cluster. If you are using a DS node type, you can also choose to change to another DS node type of the same size during
 *
 * restore>
 *
 * If you restore a cluster into a VPC, you must provide a cluster subnet group where you want the cluster
 *
 * restored>
 *
 * For more information about working with snapshots, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RestoreFromClusterSnapshotResponse * RedshiftClient::restoreFromClusterSnapshot(const RestoreFromClusterSnapshotRequest &request)
{

}

/**
 * Creates a new table from a table in an Amazon Redshift cluster snapshot. You must create the new table within the Amazon
 * Redshift cluster that the snapshot was taken
 *
 * from>
 *
 * You cannot use <code>RestoreTableFromClusterSnapshot</code> to restore a table with the same name as an existing table
 * in an Amazon Redshift cluster. That is, you cannot overwrite an existing table in a cluster with a restored table. If
 * you want to replace your original table with a new, restored table, then rename or drop your original table before you
 * call <code>RestoreTableFromClusterSnapshot</code>. When you have renamed your original table, then you can pass the
 * original name of the table as the <code>NewTableName</code> parameter value in the call to
 * <code>RestoreTableFromClusterSnapshot</code>. This way, you can replace the original table with the table created from
 * the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RestoreTableFromClusterSnapshotResponse * RedshiftClient::restoreTableFromClusterSnapshot(const RestoreTableFromClusterSnapshotRequest &request)
{

}

/**
 * Revokes an ingress rule in an Amazon Redshift security group for a previously authorized IP range or Amazon EC2 security
 * group. To add an ingress rule, see <a>AuthorizeClusterSecurityGroupIngress</a>. For information about managing security
 * groups, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
 * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster Management Guide</i>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RevokeClusterSecurityGroupIngressResponse * RedshiftClient::revokeClusterSecurityGroupIngress(const RevokeClusterSecurityGroupIngressRequest &request)
{

}

/**
 * Removes the ability of the specified AWS customer account to restore the specified snapshot. If the account is currently
 * restoring the snapshot, the restore will run to
 *
 * completion>
 *
 * For more information about working with snapshots, go to <a
 * href="http://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon Redshift Snapshots</a> in the
 * <i>Amazon Redshift Cluster Management
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RevokeSnapshotAccessResponse * RedshiftClient::revokeSnapshotAccess(const RevokeSnapshotAccessRequest &request)
{

}

/**
 * Rotates the encryption keys for a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RotateEncryptionKeyResponse * RedshiftClient::rotateEncryptionKey(const RotateEncryptionKeyRequest &request)
{

}

/**
 * @internal
 *
 * @class  RedshiftClientPrivate
 *
 * @brief  Private implementation for RedshiftClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RedshiftClientPrivate object.
 *
 * @param  q  Pointer to this object's public RedshiftClient instance.
 */
RedshiftClientPrivate::RedshiftClientPrivate(RedshiftClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Redshift
} // namespace AWS
