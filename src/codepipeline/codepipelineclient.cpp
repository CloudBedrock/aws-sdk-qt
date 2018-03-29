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

#include "codepipelineclient.h"
#include "codepipelineclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  CodePipelineClient
 *
 * @brief  Client for AWS CodePipeline
 *
 * <fullname>AWS CodePipeline</fullname>
 *
 * <b>Overview</b>
 *
 * </p
 *
 * This is the AWS CodePipeline API Reference. This guide provides descriptions of the actions and data types for AWS
 * CodePipeline. Some functionality for your pipeline is only configurable through the API. For additional information, see
 * the <a href="http://docs.aws.amazon.com/codepipeline/latest/userguide/welcome.html">AWS CodePipeline User
 *
 * Guide</a>>
 *
 * You can use the AWS CodePipeline API to work with pipelines, stages, actions, gates, and transitions, as described
 *
 * below>
 *
 * <i>Pipelines</i> are models of automated release processes. Each pipeline is uniquely named, and consists of actions,
 * gates, and stages.
 *
 * </p
 *
 * You can work with pipelines by
 *
 * calling> <ul> <li>
 *
 * <a>CreatePipeline</a>, which creates a uniquely-named
 *
 * pipeline> </li> <li>
 *
 * <a>DeletePipeline</a>, which deletes the specified
 *
 * pipeline> </li> <li>
 *
 * <a>GetPipeline</a>, which returns information about the pipeline structure and pipeline metadata, including the pipeline
 * Amazon Resource Name
 *
 * (ARN)> </li> <li>
 *
 * <a>GetPipelineExecution</a>, which returns information about a specific execution of a
 *
 * pipeline> </li> <li>
 *
 * <a>GetPipelineState</a>, which returns information about the current state of the stages and actions of a
 *
 * pipeline> </li> <li>
 *
 * <a>ListPipelines</a>, which gets a summary of all of the pipelines associated with your
 *
 * account> </li> <li>
 *
 * <a>ListPipelineExecutions</a>, which gets a summary of the most recent executions for a
 *
 * pipeline> </li> <li>
 *
 * <a>StartPipelineExecution</a>, which runs the the most recent revision of an artifact through the
 *
 * pipeline> </li> <li>
 *
 * <a>UpdatePipeline</a>, which updates a pipeline with edits or changes to the structure of the
 *
 * pipeline> </li> </ul>
 *
 * Pipelines include <i>stages</i>, which are logical groupings of gates and actions. Each stage contains one or more
 * actions that must complete before the next stage begins. A stage will result in success or failure. If a stage fails,
 * then the pipeline stops at that stage and will remain stopped until either a new version of an artifact appears in the
 * source location, or a user takes action to re-run the most recent artifact through the pipeline. You can call
 * <a>GetPipelineState</a>, which displays the status of a pipeline, including the status of stages in the pipeline, or
 * <a>GetPipeline</a>, which returns the entire structure of the pipeline, including the stages of that pipeline. For more
 * information about the structure of stages and actions, also refer to the <a
 * href="http://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-structure.html">AWS CodePipeline Pipeline
 * Structure
 *
 * Reference</a>>
 *
 * Pipeline stages include <i>actions</i>, which are categorized into categories such as source or build actions performed
 * within a stage of a pipeline. For example, you can use a source action to import artifacts into a pipeline from a source
 * such as Amazon S3. Like stages, you do not work with actions directly in most cases, but you do define and interact with
 * actions when working with pipeline operations such as <a>CreatePipeline</a> and <a>GetPipelineState</a>.
 *
 * </p
 *
 * Pipelines also include <i>transitions</i>, which allow the transition of artifacts from one stage to the next in a
 * pipeline after the actions in one stage
 *
 * complete>
 *
 * You can work with transitions by
 *
 * calling> <ul> <li>
 *
 * <a>DisableStageTransition</a>, which prevents artifacts from transitioning to the next stage in a
 *
 * pipeline> </li> <li>
 *
 * <a>EnableStageTransition</a>, which enables transition of artifacts between stages in a pipeline.
 *
 * </p </li> </ul>
 *
 * <b>Using the API to integrate with AWS CodePipeline</b>
 *
 * </p
 *
 * For third-party integrators or developers who want to create their own integrations with AWS CodePipeline, the expected
 * sequence varies from the standard API user. In order to integrate with AWS CodePipeline, developers will need to work
 * with the following
 *
 * items>
 *
 * <b>Jobs</b>, which are instances of an action. For example, a job for a source action might import a revision of an
 * artifact from a source.
 *
 * </p
 *
 * You can work with jobs by
 *
 * calling> <ul> <li>
 *
 * <a>AcknowledgeJob</a>, which confirms whether a job worker has received the specified
 *
 * job> </li> <li>
 *
 * <a>GetJobDetails</a>, which returns the details of a
 *
 * job> </li> <li>
 *
 * <a>PollForJobs</a>, which determines whether there are any jobs to act upon,
 *
 * </p </li> <li>
 *
 * <a>PutJobFailureResult</a>, which provides details of a job failure,
 *
 * an> </li> <li>
 *
 * <a>PutJobSuccessResult</a>, which provides details of a job
 *
 * success> </li> </ul>
 *
 * <b>Third party jobs</b>, which are instances of an action created by a partner action and integrated into AWS
 * CodePipeline. Partner actions are created by members of the AWS Partner
 *
 * Network>
 *
 * You can work with third party jobs by
 *
 * calling> <ul> <li>
 *
 * <a>AcknowledgeThirdPartyJob</a>, which confirms whether a job worker has received the specified
 *
 * job> </li> <li>
 *
 * <a>GetThirdPartyJobDetails</a>, which requests the details of a job for a partner
 *
 * action> </li> <li>
 *
 * <a>PollForThirdPartyJobs</a>, which determines whether there are any jobs to act upon,
 *
 * </p </li> <li>
 *
 * <a>PutThirdPartyJobFailureResult</a>, which provides details of a job failure,
 *
 * an> </li> <li>
 *
 * <a>PutThirdPartyJobSuccessResult</a>, which provides details of a job
 */

/**
 * @brief  Constructs a new CodePipelineClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CodePipelineClient::CodePipelineClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodePipelineClientPrivate(this), parent)
{
    Q_D(CodePipelineClient);
    d->apiVersion = QStringLiteral("2015-07-09");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("codepipeline");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS CodePipeline");
    d->serviceName = QStringLiteral("codepipeline");
}

/**
 * @brief  Constructs a new CodePipelineClient object.
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
CodePipelineClient::CodePipelineClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodePipelineClientPrivate(this), parent)
{
    Q_D(CodePipelineClient);
    d->apiVersion = QStringLiteral("2015-07-09");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("codepipeline");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS CodePipeline");
    d->serviceName = QStringLiteral("codepipeline");
}

/**
 * Returns information about a specified job and whether that job has been received by the job worker. Only used for custom
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AcknowledgeJobResponse * CodePipelineClient::acknowledgeJob(const AcknowledgeJobRequest &request)
{
    return qobject_cast<AcknowledgeJobResponse *>(send(request));
}

/**
 * Confirms a job worker has received the specified job. Only used for partner
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AcknowledgeThirdPartyJobResponse * CodePipelineClient::acknowledgeThirdPartyJob(const AcknowledgeThirdPartyJobRequest &request)
{
    return qobject_cast<AcknowledgeThirdPartyJobResponse *>(send(request));
}

/**
 * Creates a new custom action that can be used in all pipelines associated with the AWS account. Only used for custom
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCustomActionTypeResponse * CodePipelineClient::createCustomActionType(const CreateCustomActionTypeRequest &request)
{
    return qobject_cast<CreateCustomActionTypeResponse *>(send(request));
}

/**
 * Creates a
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePipelineResponse * CodePipelineClient::createPipeline(const CreatePipelineRequest &request)
{
    return qobject_cast<CreatePipelineResponse *>(send(request));
}

/**
 * Marks a custom action as deleted. PollForJobs for the custom action will fail after the action is marked for deletion.
 * Only used for custom
 *
 * actions> <b>
 *
 * You cannot recreate a custom action after it has been deleted unless you increase the version number of the
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCustomActionTypeResponse * CodePipelineClient::deleteCustomActionType(const DeleteCustomActionTypeRequest &request)
{
    return qobject_cast<DeleteCustomActionTypeResponse *>(send(request));
}

/**
 * Deletes the specified
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePipelineResponse * CodePipelineClient::deletePipeline(const DeletePipelineRequest &request)
{
    return qobject_cast<DeletePipelineResponse *>(send(request));
}

/**
 * Prevents artifacts in a pipeline from transitioning to the next stage in the
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableStageTransitionResponse * CodePipelineClient::disableStageTransition(const DisableStageTransitionRequest &request)
{
    return qobject_cast<DisableStageTransitionResponse *>(send(request));
}

/**
 * Enables artifacts in a pipeline to transition to a stage in a
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableStageTransitionResponse * CodePipelineClient::enableStageTransition(const EnableStageTransitionRequest &request)
{
    return qobject_cast<EnableStageTransitionResponse *>(send(request));
}

/**
 * Returns information about a job. Only used for custom
 *
 * actions> <b>
 *
 * When this API is called, AWS CodePipeline returns temporary credentials for the Amazon S3 bucket used to store artifacts
 * for the pipeline, if the action requires access to that Amazon S3 bucket for input or output artifacts. Additionally,
 * this API returns any secret values defined for the
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetJobDetailsResponse * CodePipelineClient::getJobDetails(const GetJobDetailsRequest &request)
{
    return qobject_cast<GetJobDetailsResponse *>(send(request));
}

/**
 * Returns the metadata, structure, stages, and actions of a pipeline. Can be used to return the entire structure of a
 * pipeline in JSON format, which can then be modified and used to update the pipeline structure with
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPipelineResponse * CodePipelineClient::getPipeline(const GetPipelineRequest &request)
{
    return qobject_cast<GetPipelineResponse *>(send(request));
}

/**
 * Returns information about an execution of a pipeline, including details about artifacts, the pipeline execution ID, and
 * the name, version, and status of the
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPipelineExecutionResponse * CodePipelineClient::getPipelineExecution(const GetPipelineExecutionRequest &request)
{
    return qobject_cast<GetPipelineExecutionResponse *>(send(request));
}

/**
 * Returns information about the state of a pipeline, including the stages and
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPipelineStateResponse * CodePipelineClient::getPipelineState(const GetPipelineStateRequest &request)
{
    return qobject_cast<GetPipelineStateResponse *>(send(request));
}

/**
 * Requests the details of a job for a third party action. Only used for partner
 *
 * actions> <b>
 *
 * When this API is called, AWS CodePipeline returns temporary credentials for the Amazon S3 bucket used to store artifacts
 * for the pipeline, if the action requires access to that Amazon S3 bucket for input or output artifacts. Additionally,
 * this API returns any secret values defined for the
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetThirdPartyJobDetailsResponse * CodePipelineClient::getThirdPartyJobDetails(const GetThirdPartyJobDetailsRequest &request)
{
    return qobject_cast<GetThirdPartyJobDetailsResponse *>(send(request));
}

/**
 * Gets a summary of all AWS CodePipeline action types associated with your
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListActionTypesResponse * CodePipelineClient::listActionTypes(const ListActionTypesRequest &request)
{
    return qobject_cast<ListActionTypesResponse *>(send(request));
}

/**
 * Gets a summary of the most recent executions for a
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPipelineExecutionsResponse * CodePipelineClient::listPipelineExecutions(const ListPipelineExecutionsRequest &request)
{
    return qobject_cast<ListPipelineExecutionsResponse *>(send(request));
}

/**
 * Gets a summary of all of the pipelines associated with your
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPipelinesResponse * CodePipelineClient::listPipelines(const ListPipelinesRequest &request)
{
    return qobject_cast<ListPipelinesResponse *>(send(request));
}

/**
 * Returns information about any jobs for AWS CodePipeline to act
 *
 * upon> <b>
 *
 * When this API is called, AWS CodePipeline returns temporary credentials for the Amazon S3 bucket used to store artifacts
 * for the pipeline, if the action requires access to that Amazon S3 bucket for input or output artifacts. Additionally,
 * this API returns any secret values defined for the
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PollForJobsResponse * CodePipelineClient::pollForJobs(const PollForJobsRequest &request)
{
    return qobject_cast<PollForJobsResponse *>(send(request));
}

/**
 * Determines whether there are any third party jobs for a job worker to act on. Only used for partner
 *
 * actions> <b>
 *
 * When this API is called, AWS CodePipeline returns temporary credentials for the Amazon S3 bucket used to store artifacts
 * for the pipeline, if the action requires access to that Amazon S3 bucket for input or output
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PollForThirdPartyJobsResponse * CodePipelineClient::pollForThirdPartyJobs(const PollForThirdPartyJobsRequest &request)
{
    return qobject_cast<PollForThirdPartyJobsResponse *>(send(request));
}

/**
 * Provides information to AWS CodePipeline about new revisions to a
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutActionRevisionResponse * CodePipelineClient::putActionRevision(const PutActionRevisionRequest &request)
{
    return qobject_cast<PutActionRevisionResponse *>(send(request));
}

/**
 * Provides the response to a manual approval request to AWS CodePipeline. Valid responses include Approved and
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutApprovalResultResponse * CodePipelineClient::putApprovalResult(const PutApprovalResultRequest &request)
{
    return qobject_cast<PutApprovalResultResponse *>(send(request));
}

/**
 * Represents the failure of a job as returned to the pipeline by a job worker. Only used for custom
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutJobFailureResultResponse * CodePipelineClient::putJobFailureResult(const PutJobFailureResultRequest &request)
{
    return qobject_cast<PutJobFailureResultResponse *>(send(request));
}

/**
 * Represents the success of a job as returned to the pipeline by a job worker. Only used for custom
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutJobSuccessResultResponse * CodePipelineClient::putJobSuccessResult(const PutJobSuccessResultRequest &request)
{
    return qobject_cast<PutJobSuccessResultResponse *>(send(request));
}

/**
 * Represents the failure of a third party job as returned to the pipeline by a job worker. Only used for partner
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutThirdPartyJobFailureResultResponse * CodePipelineClient::putThirdPartyJobFailureResult(const PutThirdPartyJobFailureResultRequest &request)
{
    return qobject_cast<PutThirdPartyJobFailureResultResponse *>(send(request));
}

/**
 * Represents the success of a third party job as returned to the pipeline by a job worker. Only used for partner
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutThirdPartyJobSuccessResultResponse * CodePipelineClient::putThirdPartyJobSuccessResult(const PutThirdPartyJobSuccessResultRequest &request)
{
    return qobject_cast<PutThirdPartyJobSuccessResultResponse *>(send(request));
}

/**
 * Resumes the pipeline execution by retrying the last failed actions in a
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RetryStageExecutionResponse * CodePipelineClient::retryStageExecution(const RetryStageExecutionRequest &request)
{
    return qobject_cast<RetryStageExecutionResponse *>(send(request));
}

/**
 * Starts the specified pipeline. Specifically, it begins processing the latest commit to the source location specified as
 * part of the
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartPipelineExecutionResponse * CodePipelineClient::startPipelineExecution(const StartPipelineExecutionRequest &request)
{
    return qobject_cast<StartPipelineExecutionResponse *>(send(request));
}

/**
 * Updates a specified pipeline with edits or changes to its structure. Use a JSON file with the pipeline structure in
 * conjunction with UpdatePipeline to provide the full structure of the pipeline. Updating the pipeline increases the
 * version number of the pipeline by
 *
 * @param  request Request to send to AWS CodePipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePipelineResponse * CodePipelineClient::updatePipeline(const UpdatePipelineRequest &request)
{
    return qobject_cast<UpdatePipelineResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  CodePipelineClientPrivate
 *
 * @brief  Private implementation for CodePipelineClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CodePipelineClientPrivate object.
 *
 * @param  q  Pointer to this object's public CodePipelineClient instance.
 */
CodePipelineClientPrivate::CodePipelineClientPrivate(CodePipelineClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CodePipeline
} // namespace QtAws
