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

#include "describepipelinesresponse.h"
#include "describepipelinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::DescribePipelinesResponse
 *
 * \brief The DescribePipelinesResponse class encapsulates DataPipeline DescribePipelines responses.
 *
 * \ingroup DataPipeline
 *
 *  AWS Data Pipeline configures and manages a data-driven workflow called a pipeline. AWS Data Pipeline handles the details
 *  of scheduling and ensuring that data dependencies are met so that your application can focus on processing the
 * 
 *  data>
 * 
 *  AWS Data Pipeline provides a JAR implementation of a task runner called AWS Data Pipeline Task Runner. AWS Data Pipeline
 *  Task Runner provides logic for common data management scenarios, such as performing database queries and running data
 *  analysis using Amazon Elastic MapReduce (Amazon EMR). You can use AWS Data Pipeline Task Runner as your task runner, or
 *  you can write your own task runner to provide custom data
 * 
 *  management>
 * 
 *  AWS Data Pipeline implements two main sets of functionality. Use the first set to create a pipeline and define data
 *  sources, schedules, dependencies, and the transforms to be performed on the data. Use the second set in your task runner
 *  application to receive the next task ready for processing. The logic for performing the task, such as querying the data,
 *  running data analysis, or converting the data from one format to another, is contained within the task runner. The task
 *  runner performs the task assigned to it by the web service, reporting progress to the web service as it does so. When
 *  the task is done, the task runner reports the final success or failure of the task to the web
 *
 * \sa DataPipelineClient::describePipelines
 */

/*!
 * @brief  Constructs a new DescribePipelinesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePipelinesResponse::DescribePipelinesResponse(
        const DescribePipelinesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new DescribePipelinesResponsePrivate(this), parent)
{
    setRequest(new DescribePipelinesRequest(request));
    setReply(reply);
}

const DescribePipelinesRequest * DescribePipelinesResponse::request() const
{
    Q_D(const DescribePipelinesResponse);
    return static_cast<const DescribePipelinesRequest *>(d->request);
}

/*!
 * @brief  Parse a DataPipeline DescribePipelines response.
 *
 * @param  response  Response to parse.
 */
void DescribePipelinesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribePipelinesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribePipelinesResponsePrivate
 *
 * \brief Private implementation for DescribePipelinesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribePipelinesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePipelinesResponse instance.
 */
DescribePipelinesResponsePrivate::DescribePipelinesResponsePrivate(
    DescribePipelinesResponse * const q) : DataPipelineResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DataPipeline DescribePipelinesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePipelinesResponsePrivate::parseDescribePipelinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePipelinesResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace QtAws
