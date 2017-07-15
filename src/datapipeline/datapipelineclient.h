/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_DATAPIPELINECLIENT_H
#define QTAWS_DATAPIPELINECLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace DataPipeline {

class DataPipelineClientPrivate;

class QTAWS_EXPORT DataPipelineClient : public AwsAbstractClient {
    Q_OBJECT

public:
    DataPipelineClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DataPipelineClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ActivatePipelineResponse * activatePipeline(const ActivatePipelineRequest &request);
    AddTagsResponse * addTags(const AddTagsRequest &request);
    CreatePipelineResponse * createPipeline(const CreatePipelineRequest &request);
    DeactivatePipelineResponse * deactivatePipeline(const DeactivatePipelineRequest &request);
    DeletePipelineResponse * deletePipeline(const DeletePipelineRequest &request);
    DescribeObjectsResponse * describeObjects(const DescribeObjectsRequest &request);
    DescribePipelinesResponse * describePipelines(const DescribePipelinesRequest &request);
    EvaluateExpressionResponse * evaluateExpression(const EvaluateExpressionRequest &request);
    GetPipelineDefinitionResponse * getPipelineDefinition(const GetPipelineDefinitionRequest &request);
    ListPipelinesResponse * listPipelines(const ListPipelinesRequest &request);
    PollForTaskResponse * pollForTask(const PollForTaskRequest &request);
    PutPipelineDefinitionResponse * putPipelineDefinition(const PutPipelineDefinitionRequest &request);
    QueryObjectsResponse * queryObjects(const QueryObjectsRequest &request);
    RemoveTagsResponse * removeTags(const RemoveTagsRequest &request);
    ReportTaskProgressResponse * reportTaskProgress(const ReportTaskProgressRequest &request);
    ReportTaskRunnerHeartbeatResponse * reportTaskRunnerHeartbeat(const ReportTaskRunnerHeartbeatRequest &request);
    SetStatusResponse * setStatus(const SetStatusRequest &request);
    SetTaskStatusResponse * setTaskStatus(const SetTaskStatusRequest &request);
    ValidatePipelineDefinitionResponse * validatePipelineDefinition(const ValidatePipelineDefinitionRequest &request);

private:
    Q_DECLARE_PRIVATE(DataPipelineClient)
    Q_DISABLE_COPY(DataPipelineClient)

};

} // namespace DataPipeline
} // namespace AWS

#endif
