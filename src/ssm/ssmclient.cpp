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

#include "ssmclient.h"
#include "ssmclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace SSM {

/**
 * @class  SsmClient
 *
 * @brief  Client for Amazon Simple Systems Manager (SSM) ( SSM)
 *
 * <fullname>AWS Systems Manager</fullname>
 *
 * AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 * inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 * configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 * configuration of your managed instances. A <i>managed instance</i> is any Amazon EC2 instance or on-premises machine in
 * your hybrid environment that has been configured for Systems
 *
 * Manager>
 *
 * This reference is intended to be used with the <a
 * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 *
 * Guide</a>>
 *
 * To get started, verify prerequisites and configure managed instances. For more information, see <a
 * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Systems Manager
 *
 * Prerequisites</a>>
 *
 * For information about other API actions you can perform on Amazon EC2 instances, see the <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 * use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 * Requests</a>.
 */

/**
 * @brief  Constructs a new SsmClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SsmClient::SsmClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SsmClientPrivate(this), parent)
{
    Q_D(SsmClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new SsmClient object.
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
SsmClient::SsmClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SsmClientPrivate(this), parent)
{
    Q_D(SsmClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Adds or overwrites one or more tags for the specified resource. Tags are metadata that you can assign to your documents,
 * managed instances, Maintenance Windows, Parameter Store parameters, and patch baselines. Tags enable you to categorize
 * your resources in different ways, for example, by purpose, owner, or environment. Each tag consists of a key and an
 * optional value, both of which you define. For example, you could define a set of tags for your account's managed
 * instances that helps you track each instance's owner and stack level. For example: Key=Owner and Value=DbAdmin,
 * SysAdmin, or Dev. Or Key=Stack and Value=Production, Pre-Production, or
 *
 * Test>
 *
 * Each resource can have a maximum of 50 tags.
 *
 * </p
 *
 * We recommend that you devise a set of tag keys that meets your needs for each resource type. Using a consistent set of
 * tag keys makes it easier for you to manage your resources. You can search and filter the resources based on the tags you
 * add. Tags don't have any semantic meaning to Amazon EC2 and are interpreted strictly as a string of characters.
 *
 * </p
 *
 * For more information about tags, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging Your Amazon EC2 Resources</a> in the
 * <i>Amazon EC2 User
 */
AddTagsToResourceResponse * SsmClient::addTagsToResource(const AddTagsToResourceRequest &request)
{

}

/**
 * Attempts to cancel the command specified by the Command ID. There is no guarantee that the command will be terminated
 * and the underlying process
 */
CancelCommandResponse * SsmClient::cancelCommand(const CancelCommandRequest &request)
{

}

/**
 * Registers your on-premises server or virtual machine with Amazon EC2 so that you can manage these resources using Run
 * Command. An on-premises server or virtual machine that has been registered with EC2 is called a managed instance. For
 * more information about activations, see <a
 * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-managedinstances.html">Setting Up
 * Systems Manager in Hybrid
 */
CreateActivationResponse * SsmClient::createActivation(const CreateActivationRequest &request)
{

}

/**
 * Associates the specified Systems Manager document with the specified instances or
 *
 * targets>
 *
 * When you associate a document with one or more instances using instance IDs or tags, the SSM Agent running on the
 * instance processes the document and configures the instance as
 *
 * specified>
 *
 * If you associate a document with an instance that already has an associated document, the system throws the
 * AssociationAlreadyExists
 */
CreateAssociationResponse * SsmClient::createAssociation(const CreateAssociationRequest &request)
{

}

/**
 * Associates the specified Systems Manager document with the specified instances or
 *
 * targets>
 *
 * When you associate a document with one or more instances using instance IDs or tags, the SSM Agent running on the
 * instance processes the document and configures the instance as
 *
 * specified>
 *
 * If you associate a document with an instance that already has an associated document, the system throws the
 * AssociationAlreadyExists
 */
CreateAssociationBatchResponse * SsmClient::createAssociationBatch(const CreateAssociationBatchRequest &request)
{

}

/**
 * Creates a Systems Manager
 *
 * document>
 *
 * After you create a document, you can use CreateAssociation to associate it with one or more running
 */
CreateDocumentResponse * SsmClient::createDocument(const CreateDocumentRequest &request)
{

}

/**
 * Creates a new Maintenance
 */
CreateMaintenanceWindowResponse * SsmClient::createMaintenanceWindow(const CreateMaintenanceWindowRequest &request)
{

}

/**
 * Creates a patch
 *
 * baseline> <note>
 *
 * For information about valid key and value pairs in <code>PatchFilters</code> for each supported operating system type,
 * see <a
 */
CreatePatchBaselineResponse * SsmClient::createPatchBaseline(const CreatePatchBaselineRequest &request)
{

}

/**
 * Creates a resource data sync configuration to a single bucket in Amazon S3. This is an asynchronous operation that
 * returns immediately. After a successful initial sync is completed, the system continuously syncs data to the Amazon S3
 * bucket. To check the status of the sync, use the
 *
 * <a>ListResourceDataSync</a>>
 *
 * By default, data is not encrypted in Amazon S3. We strongly recommend that you enable encryption in Amazon S3 to ensure
 * secure data storage. We also recommend that you secure access to the Amazon S3 bucket by creating a restrictive bucket
 * policy. To view an example of a restrictive Amazon S3 bucket policy for Resource Data Sync, see <a
 * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-configuring.html#sysman-inventory-datasync">Configuring
 * Resource Data Sync for
 */
CreateResourceDataSyncResponse * SsmClient::createResourceDataSync(const CreateResourceDataSyncRequest &request)
{

}

/**
 * Deletes an activation. You are not required to delete an activation. If you delete an activation, you can no longer use
 * it to register additional managed instances. Deleting an activation does not de-register managed instances. You must
 * manually de-register managed
 */
DeleteActivationResponse * SsmClient::deleteActivation(const DeleteActivationRequest &request)
{

}

/**
 * Disassociates the specified Systems Manager document from the specified
 *
 * instance>
 *
 * When you disassociate a document from an instance, it does not change the configuration of the instance. To change the
 * configuration state of an instance after you disassociate a document, you must create a new document with the desired
 * configuration and associate it with the
 */
DeleteAssociationResponse * SsmClient::deleteAssociation(const DeleteAssociationRequest &request)
{

}

/**
 * Deletes the Systems Manager document and all instance associations to the
 *
 * document>
 *
 * Before you delete the document, we recommend that you use <a>DeleteAssociation</a> to disassociate all instances that
 * are associated with the
 */
DeleteDocumentResponse * SsmClient::deleteDocument(const DeleteDocumentRequest &request)
{

}

/**
 * Deletes a Maintenance
 */
DeleteMaintenanceWindowResponse * SsmClient::deleteMaintenanceWindow(const DeleteMaintenanceWindowRequest &request)
{

}

/**
 * Delete a parameter from the
 */
DeleteParameterResponse * SsmClient::deleteParameter(const DeleteParameterRequest &request)
{

}

/**
 * Delete a list of parameters. This API is used to delete parameters by using the Amazon EC2
 */
DeleteParametersResponse * SsmClient::deleteParameters(const DeleteParametersRequest &request)
{

}

/**
 * Deletes a patch
 */
DeletePatchBaselineResponse * SsmClient::deletePatchBaseline(const DeletePatchBaselineRequest &request)
{

}

/**
 * Deletes a Resource Data Sync configuration. After the configuration is deleted, changes to inventory data on managed
 * instances are no longer synced with the target Amazon S3 bucket. Deleting a sync configuration does not delete data in
 * the target Amazon S3
 */
DeleteResourceDataSyncResponse * SsmClient::deleteResourceDataSync(const DeleteResourceDataSyncRequest &request)
{

}

/**
 * Removes the server or virtual machine from the list of registered servers. You can reregister the instance again at any
 * time. If you don't plan to use Run Command on the server, we suggest uninstalling the SSM Agent
 */
DeregisterManagedInstanceResponse * SsmClient::deregisterManagedInstance(const DeregisterManagedInstanceRequest &request)
{

}

/**
 * Removes a patch group from a patch
 */
DeregisterPatchBaselineForPatchGroupResponse * SsmClient::deregisterPatchBaselineForPatchGroup(const DeregisterPatchBaselineForPatchGroupRequest &request)
{

}

/**
 * Removes a target from a Maintenance
 */
DeregisterTargetFromMaintenanceWindowResponse * SsmClient::deregisterTargetFromMaintenanceWindow(const DeregisterTargetFromMaintenanceWindowRequest &request)
{

}

/**
 * Removes a task from a Maintenance
 */
DeregisterTaskFromMaintenanceWindowResponse * SsmClient::deregisterTaskFromMaintenanceWindow(const DeregisterTaskFromMaintenanceWindowRequest &request)
{

}

/**
 * Details about the activation, including: the date and time the activation was created, the expiration date, the IAM role
 * assigned to the instances in the activation, and the number of instances activated by this
 */
DescribeActivationsResponse * SsmClient::describeActivations(const DescribeActivationsRequest &request)
{

}

/**
 * Describes the association for the specified target or instance. If you created the association by using the
 * <code>Targets</code> parameter, then you must retrieve the association by using the association ID. If you created the
 * association by specifying an instance ID and a Systems Manager document, then you retrieve the association by specifying
 * the document name and the instance ID.
 */
DescribeAssociationResponse * SsmClient::describeAssociation(const DescribeAssociationRequest &request)
{

}

/**
 * Provides details about all active and terminated Automation
 */
DescribeAutomationExecutionsResponse * SsmClient::describeAutomationExecutions(const DescribeAutomationExecutionsRequest &request)
{

}

/**
 * Information about all active and terminated step executions in an Automation
 */
DescribeAutomationStepExecutionsResponse * SsmClient::describeAutomationStepExecutions(const DescribeAutomationStepExecutionsRequest &request)
{

}

/**
 * Lists all patches that could possibly be included in a patch
 */
DescribeAvailablePatchesResponse * SsmClient::describeAvailablePatches(const DescribeAvailablePatchesRequest &request)
{

}

/**
 * Describes the specified Systems Manager
 */
DescribeDocumentResponse * SsmClient::describeDocument(const DescribeDocumentRequest &request)
{

}

/**
 * Describes the permissions for a Systems Manager document. If you created the document, you are the owner. If a document
 * is shared, it can either be shared privately (by specifying a user's AWS account ID) or publicly (<i>All</i>).
 */
DescribeDocumentPermissionResponse * SsmClient::describeDocumentPermission(const DescribeDocumentPermissionRequest &request)
{

}

/**
 * All associations for the
 */
DescribeEffectiveInstanceAssociationsResponse * SsmClient::describeEffectiveInstanceAssociations(const DescribeEffectiveInstanceAssociationsRequest &request)
{

}

/**
 * Retrieves the current effective patches (the patch and the approval state) for the specified patch baseline. Note that
 * this API applies only to Windows patch
 */
DescribeEffectivePatchesForPatchBaselineResponse * SsmClient::describeEffectivePatchesForPatchBaseline(const DescribeEffectivePatchesForPatchBaselineRequest &request)
{

}

/**
 * The status of the associations for the
 */
DescribeInstanceAssociationsStatusResponse * SsmClient::describeInstanceAssociationsStatus(const DescribeInstanceAssociationsStatusRequest &request)
{

}

/**
 * Describes one or more of your instances. You can use this to get information about instances like the operating system
 * platform, the SSM Agent version (Linux), status etc. If you specify one or more instance IDs, it returns information for
 * those instances. If you do not specify instance IDs, it returns information for all your instances. If you specify an
 * instance ID that is not valid or an instance that you do not own, you receive an error.
 */
DescribeInstanceInformationResponse * SsmClient::describeInstanceInformation(const DescribeInstanceInformationRequest &request)
{

}

/**
 * Retrieves the high-level patch state of one or more
 */
DescribeInstancePatchStatesResponse * SsmClient::describeInstancePatchStates(const DescribeInstancePatchStatesRequest &request)
{

}

/**
 * Retrieves the high-level patch state for the instances in the specified patch
 */
DescribeInstancePatchStatesForPatchGroupResponse * SsmClient::describeInstancePatchStatesForPatchGroup(const DescribeInstancePatchStatesForPatchGroupRequest &request)
{

}

/**
 * Retrieves information about the patches on the specified instance and their state relative to the patch baseline being
 * used for the
 */
DescribeInstancePatchesResponse * SsmClient::describeInstancePatches(const DescribeInstancePatchesRequest &request)
{

}

/**
 * Retrieves the individual task executions (one per target) for a particular task executed as part of a Maintenance Window
 */
DescribeMaintenanceWindowExecutionTaskInvocationsResponse * SsmClient::describeMaintenanceWindowExecutionTaskInvocations(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest &request)
{

}

/**
 * For a given Maintenance Window execution, lists the tasks that were
 */
DescribeMaintenanceWindowExecutionTasksResponse * SsmClient::describeMaintenanceWindowExecutionTasks(const DescribeMaintenanceWindowExecutionTasksRequest &request)
{

}

/**
 * Lists the executions of a Maintenance Window. This includes information about when the Maintenance Window was scheduled
 * to be active, and information about tasks registered and run with the Maintenance
 */
DescribeMaintenanceWindowExecutionsResponse * SsmClient::describeMaintenanceWindowExecutions(const DescribeMaintenanceWindowExecutionsRequest &request)
{

}

/**
 * Lists the targets registered with the Maintenance
 */
DescribeMaintenanceWindowTargetsResponse * SsmClient::describeMaintenanceWindowTargets(const DescribeMaintenanceWindowTargetsRequest &request)
{

}

/**
 * Lists the tasks in a Maintenance
 */
DescribeMaintenanceWindowTasksResponse * SsmClient::describeMaintenanceWindowTasks(const DescribeMaintenanceWindowTasksRequest &request)
{

}

/**
 * Retrieves the Maintenance Windows in an AWS
 */
DescribeMaintenanceWindowsResponse * SsmClient::describeMaintenanceWindows(const DescribeMaintenanceWindowsRequest &request)
{

}

/**
 * Get information about a
 *
 * parameter>
 *
 * Request results are returned on a best-effort basis. If you specify <code>MaxResults</code> in the request, the response
 * includes information up to the limit specified. The number of items returned, however, can be between zero and the value
 * of <code>MaxResults</code>. If the service reaches an internal limit while processing the results, it stops the
 * operation and returns the matching values up to that point and a <code>NextToken</code>. You can specify the
 * <code>NextToken</code> in a subsequent call to get the next set of
 */
DescribeParametersResponse * SsmClient::describeParameters(const DescribeParametersRequest &request)
{

}

/**
 * Lists the patch baselines in your AWS
 */
DescribePatchBaselinesResponse * SsmClient::describePatchBaselines(const DescribePatchBaselinesRequest &request)
{

}

/**
 * Returns high-level aggregated patch compliance state for a patch
 */
DescribePatchGroupStateResponse * SsmClient::describePatchGroupState(const DescribePatchGroupStateRequest &request)
{

}

/**
 * Lists all patch groups that have been registered with patch
 */
DescribePatchGroupsResponse * SsmClient::describePatchGroups(const DescribePatchGroupsRequest &request)
{

}

/**
 * Get detailed information about a particular Automation
 */
GetAutomationExecutionResponse * SsmClient::getAutomationExecution(const GetAutomationExecutionRequest &request)
{

}

/**
 * Returns detailed information about command execution for an invocation or plugin.
 */
GetCommandInvocationResponse * SsmClient::getCommandInvocation(const GetCommandInvocationRequest &request)
{

}

/**
 * Retrieves the default patch baseline. Note that Systems Manager supports creating multiple default patch baselines. For
 * example, you can create a default patch baseline for each operating
 */
GetDefaultPatchBaselineResponse * SsmClient::getDefaultPatchBaseline(const GetDefaultPatchBaselineRequest &request)
{

}

/**
 * Retrieves the current snapshot for the patch baseline the instance uses. This API is primarily used by the
 * AWS-RunPatchBaseline Systems Manager document.
 */
GetDeployablePatchSnapshotForInstanceResponse * SsmClient::getDeployablePatchSnapshotForInstance(const GetDeployablePatchSnapshotForInstanceRequest &request)
{

}

/**
 * Gets the contents of the specified Systems Manager
 */
GetDocumentResponse * SsmClient::getDocument(const GetDocumentRequest &request)
{

}

/**
 * Query inventory
 */
GetInventoryResponse * SsmClient::getInventory(const GetInventoryRequest &request)
{

}

/**
 * Return a list of inventory type names for the account, or return a list of attribute names for a specific Inventory item
 * type.
 */
GetInventorySchemaResponse * SsmClient::getInventorySchema(const GetInventorySchemaRequest &request)
{

}

/**
 * Retrieves a Maintenance
 */
GetMaintenanceWindowResponse * SsmClient::getMaintenanceWindow(const GetMaintenanceWindowRequest &request)
{

}

/**
 * Retrieves details about a specific task executed as part of a Maintenance Window
 */
GetMaintenanceWindowExecutionResponse * SsmClient::getMaintenanceWindowExecution(const GetMaintenanceWindowExecutionRequest &request)
{

}

/**
 * Retrieves the details about a specific task executed as part of a Maintenance Window
 */
GetMaintenanceWindowExecutionTaskResponse * SsmClient::getMaintenanceWindowExecutionTask(const GetMaintenanceWindowExecutionTaskRequest &request)
{

}

/**
 * Retrieves a task invocation. A task invocation is a specific task executing on a specific target. Maintenance Windows
 * report status for all invocations.
 */
GetMaintenanceWindowExecutionTaskInvocationResponse * SsmClient::getMaintenanceWindowExecutionTaskInvocation(const GetMaintenanceWindowExecutionTaskInvocationRequest &request)
{

}

/**
 * Lists the tasks in a Maintenance
 */
GetMaintenanceWindowTaskResponse * SsmClient::getMaintenanceWindowTask(const GetMaintenanceWindowTaskRequest &request)
{

}

/**
 * Get information about a parameter by using the parameter name.
 */
GetParameterResponse * SsmClient::getParameter(const GetParameterRequest &request)
{

}

/**
 * Query a list of all parameters used by the AWS
 */
GetParameterHistoryResponse * SsmClient::getParameterHistory(const GetParameterHistoryRequest &request)
{

}

/**
 * Get details of a
 */
GetParametersResponse * SsmClient::getParameters(const GetParametersRequest &request)
{

}

/**
 * Retrieve parameters in a specific hierarchy. For more information, see <a
 * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-working.html">Working with Systems
 * Manager Parameters</a>.
 *
 * </p
 *
 * Request results are returned on a best-effort basis. If you specify <code>MaxResults</code> in the request, the response
 * includes information up to the limit specified. The number of items returned, however, can be between zero and the value
 * of <code>MaxResults</code>. If the service reaches an internal limit while processing the results, it stops the
 * operation and returns the matching values up to that point and a <code>NextToken</code>. You can specify the
 * <code>NextToken</code> in a subsequent call to get the next set of
 *
 * results> <note>
 *
 * This API action doesn't support filtering by tags.
 */
GetParametersByPathResponse * SsmClient::getParametersByPath(const GetParametersByPathRequest &request)
{

}

/**
 * Retrieves information about a patch
 */
GetPatchBaselineResponse * SsmClient::getPatchBaseline(const GetPatchBaselineRequest &request)
{

}

/**
 * Retrieves the patch baseline that should be used for the specified patch
 */
GetPatchBaselineForPatchGroupResponse * SsmClient::getPatchBaselineForPatchGroup(const GetPatchBaselineForPatchGroupRequest &request)
{

}

/**
 * Retrieves all versions of an association for a specific association
 */
ListAssociationVersionsResponse * SsmClient::listAssociationVersions(const ListAssociationVersionsRequest &request)
{

}

/**
 * Lists the associations for the specified Systems Manager document or
 */
ListAssociationsResponse * SsmClient::listAssociations(const ListAssociationsRequest &request)
{

}

/**
 * An invocation is copy of a command sent to a specific instance. A command can apply to one or more instances. A command
 * invocation applies to one instance. For example, if a user executes SendCommand against three instances, then a command
 * invocation is created for each requested instance ID. ListCommandInvocations provide status about command
 */
ListCommandInvocationsResponse * SsmClient::listCommandInvocations(const ListCommandInvocationsRequest &request)
{

}

/**
 * Lists the commands requested by users of the AWS
 */
ListCommandsResponse * SsmClient::listCommands(const ListCommandsRequest &request)
{

}

/**
 * For a specified resource ID, this API action returns a list of compliance statuses for different resource types.
 * Currently, you can only specify one resource ID per call. List results depend on the criteria specified in the filter.
 */
ListComplianceItemsResponse * SsmClient::listComplianceItems(const ListComplianceItemsRequest &request)
{

}

/**
 * Returns a summary count of compliant and non-compliant resources for a compliance type. For example, this call can
 * return State Manager associations, patches, or custom compliance types according to the filter criteria that you
 * specify.
 */
ListComplianceSummariesResponse * SsmClient::listComplianceSummaries(const ListComplianceSummariesRequest &request)
{

}

/**
 * List all versions for a
 */
ListDocumentVersionsResponse * SsmClient::listDocumentVersions(const ListDocumentVersionsRequest &request)
{

}

/**
 * Describes one or more of your Systems Manager
 */
ListDocumentsResponse * SsmClient::listDocuments(const ListDocumentsRequest &request)
{

}

/**
 * A list of inventory items returned by the
 */
ListInventoryEntriesResponse * SsmClient::listInventoryEntries(const ListInventoryEntriesRequest &request)
{

}

/**
 * Returns a resource-level summary count. The summary includes information about compliant and non-compliant statuses and
 * detailed compliance-item severity counts, according to the filter criteria you
 */
ListResourceComplianceSummariesResponse * SsmClient::listResourceComplianceSummaries(const ListResourceComplianceSummariesRequest &request)
{

}

/**
 * Lists your resource data sync configurations. Includes information about the last time a sync attempted to start, the
 * last sync status, and the last time a sync successfully
 *
 * completed>
 *
 * The number of sync configurations might be too large to return using a single call to <code>ListResourceDataSync</code>.
 * You can limit the number of sync configurations returned by using the <code>MaxResults</code> parameter. To determine
 * whether there are more sync configurations to list, check the value of <code>NextToken</code> in the output. If there
 * are more sync configurations to list, you can request them by specifying the <code>NextToken</code> returned in the call
 * to the parameter of a subsequent call.
 */
ListResourceDataSyncResponse * SsmClient::listResourceDataSync(const ListResourceDataSyncRequest &request)
{

}

/**
 * Returns a list of the tags assigned to the specified
 */
ListTagsForResourceResponse * SsmClient::listTagsForResource(const ListTagsForResourceRequest &request)
{

}

/**
 * Shares a Systems Manager document publicly or privately. If you share a document privately, you must specify the AWS
 * user account IDs for those people who can use the document. If you share a document publicly, you must specify
 * <i>All</i> as the account
 */
ModifyDocumentPermissionResponse * SsmClient::modifyDocumentPermission(const ModifyDocumentPermissionRequest &request)
{

}

/**
 * Registers a compliance type and other compliance details on a designated resource. This action lets you register custom
 * compliance details with a resource. This call overwrites existing compliance information on the resource, so you must
 * provide a full list of compliance items each time that you send the
 *
 * request>
 *
 * ComplianceType can be one of the
 *
 * following> <ul> <li>
 *
 * ExecutionId: The execution ID when the patch, association, or custom compliance item was
 *
 * applied> </li> <li>
 *
 * ExecutionType: Specify patch, association, or
 *
 * Custom:<code>string</code>> </li> <li>
 *
 * ExecutionTime. The time the patch, association, or custom compliance item was applied to the
 *
 * instance> </li> <li>
 *
 * Id: The patch, association, or custom compliance
 *
 * ID> </li> <li>
 *
 * Title: A
 *
 * title> </li> <li>
 *
 * Status: The status of the compliance item. For example, <code>approved</code> for patches, or <code>Failed</code> for
 *
 * associations> </li> <li>
 *
 * Severity: A patch severity. For example,
 *
 * <code>critical</code>> </li> <li>
 *
 * DocumentName: A SSM document name. For example,
 *
 * AWS-RunPatchBaseline> </li> <li>
 *
 * DocumentVersion: An SSM document version number. For example,
 *
 * 4> </li> <li>
 *
 * Classification: A patch classification. For example, <code>security
 *
 * updates</code>> </li> <li>
 *
 * PatchBaselineId: A patch baseline
 *
 * ID> </li> <li>
 *
 * PatchSeverity: A patch severity. For example,
 *
 * <code>Critical</code>> </li> <li>
 *
 * PatchState: A patch state. For example,
 *
 * <code>InstancesWithFailedPatches</code>> </li> <li>
 *
 * PatchGroup: The name of a patch
 *
 * group> </li> <li>
 *
 * InstalledTime: The time the association, patch, or custom compliance item was applied to the resource. Specify the time
 * by using the following format:
 */
PutComplianceItemsResponse * SsmClient::putComplianceItems(const PutComplianceItemsRequest &request)
{

}

/**
 * Bulk update custom inventory items on one more instance. The request adds an inventory item, if it doesn't already
 * exist, or updates an inventory item, if it does
 */
PutInventoryResponse * SsmClient::putInventory(const PutInventoryRequest &request)
{

}

/**
 * Add one or more parameters to the
 */
PutParameterResponse * SsmClient::putParameter(const PutParameterRequest &request)
{

}

/**
 * Defines the default patch
 */
RegisterDefaultPatchBaselineResponse * SsmClient::registerDefaultPatchBaseline(const RegisterDefaultPatchBaselineRequest &request)
{

}

/**
 * Registers a patch baseline for a patch
 */
RegisterPatchBaselineForPatchGroupResponse * SsmClient::registerPatchBaselineForPatchGroup(const RegisterPatchBaselineForPatchGroupRequest &request)
{

}

/**
 * Registers a target with a Maintenance
 */
RegisterTargetWithMaintenanceWindowResponse * SsmClient::registerTargetWithMaintenanceWindow(const RegisterTargetWithMaintenanceWindowRequest &request)
{

}

/**
 * Adds a new task to a Maintenance
 */
RegisterTaskWithMaintenanceWindowResponse * SsmClient::registerTaskWithMaintenanceWindow(const RegisterTaskWithMaintenanceWindowRequest &request)
{

}

/**
 * Removes all tags from the specified
 */
RemoveTagsFromResourceResponse * SsmClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{

}

/**
 * Sends a signal to an Automation execution to change the current behavior or status of the execution.
 */
SendAutomationSignalResponse * SsmClient::sendAutomationSignal(const SendAutomationSignalRequest &request)
{

}

/**
 * Executes commands on one or more managed
 */
SendCommandResponse * SsmClient::sendCommand(const SendCommandRequest &request)
{

}

/**
 * Initiates execution of an Automation
 */
StartAutomationExecutionResponse * SsmClient::startAutomationExecution(const StartAutomationExecutionRequest &request)
{

}

/**
 * Stop an Automation that is currently
 */
StopAutomationExecutionResponse * SsmClient::stopAutomationExecution(const StopAutomationExecutionRequest &request)
{

}

/**
 * Updates an association. You can update the association name and version, the document version, schedule, parameters, and
 * Amazon S3
 */
UpdateAssociationResponse * SsmClient::updateAssociation(const UpdateAssociationRequest &request)
{

}

/**
 * Updates the status of the Systems Manager document associated with the specified
 */
UpdateAssociationStatusResponse * SsmClient::updateAssociationStatus(const UpdateAssociationStatusRequest &request)
{

}

/**
 * The document you want to
 */
UpdateDocumentResponse * SsmClient::updateDocument(const UpdateDocumentRequest &request)
{

}

/**
 * Set the default version of a document.
 */
UpdateDocumentDefaultVersionResponse * SsmClient::updateDocumentDefaultVersion(const UpdateDocumentDefaultVersionRequest &request)
{

}

/**
 * Updates an existing Maintenance Window. Only specified parameters are
 */
UpdateMaintenanceWindowResponse * SsmClient::updateMaintenanceWindow(const UpdateMaintenanceWindowRequest &request)
{

}

/**
 * Modifies the target of an existing Maintenance Window. You can't change the target type, but you can change the
 *
 * following>
 *
 * The target from being an ID target to a Tag target, or a Tag target to an ID
 *
 * target>
 *
 * IDs for an ID
 *
 * target>
 *
 * Tags for a Tag
 *
 * target>
 *
 * Owner>
 *
 * Name>
 *
 * Description>
 *
 * If a parameter is null, then the corresponding field is not
 */
UpdateMaintenanceWindowTargetResponse * SsmClient::updateMaintenanceWindowTarget(const UpdateMaintenanceWindowTargetRequest &request)
{

}

/**
 * Modifies a task assigned to a Maintenance Window. You can't change the task type, but you can change the following
 *
 * values>
 *
 * Task ARN. For example, you can change a RUN_COMMAND task from AWS-RunPowerShellScript to
 *
 * AWS-RunShellScript>
 *
 * Service role
 *
 * ARN>
 *
 * Task
 *
 * parameters>
 *
 * Task
 *
 * priority>
 *
 * Task MaxConcurrency and
 *
 * MaxErrors>
 *
 * Log
 *
 * location>
 *
 * If a parameter is null, then the corresponding field is not modified. Also, if you set Replace to true, then all fields
 * required by the RegisterTaskWithMaintenanceWindow action are required for this request. Optional fields that aren't
 * specified are set to
 */
UpdateMaintenanceWindowTaskResponse * SsmClient::updateMaintenanceWindowTask(const UpdateMaintenanceWindowTaskRequest &request)
{

}

/**
 * Assigns or changes an Amazon Identity and Access Management (IAM) role to the managed
 */
UpdateManagedInstanceRoleResponse * SsmClient::updateManagedInstanceRole(const UpdateManagedInstanceRoleRequest &request)
{

}

/**
 * Modifies an existing patch baseline. Fields not specified in the request are left
 *
 * unchanged> <note>
 *
 * For information about valid key and value pairs in <code>PatchFilters</code> for each supported operating system type,
 * see <a
 */
UpdatePatchBaselineResponse * SsmClient::updatePatchBaseline(const UpdatePatchBaselineRequest &request)
{

}

/**
 * @internal
 *
 * @class  SsmClientPrivate
 *
 * @brief  Private implementation for SsmClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SsmClientPrivate object.
 *
 * @param  q  Pointer to this object's public SsmClient instance.
 */
SsmClientPrivate::SsmClientPrivate(SsmClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace SSM
} // namespace AWS
