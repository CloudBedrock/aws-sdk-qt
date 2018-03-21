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

#include "describenotebookinstancelifecycleconfigresponse.h"
#include "describenotebookinstancelifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  DescribeNotebookInstanceLifecycleConfigResponse
 *
 * @brief  Handles SageMaker DescribeNotebookInstanceLifecycleConfig responses.
 *
 * @see    SageMakerClient::describeNotebookInstanceLifecycleConfig
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNotebookInstanceLifecycleConfigResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeNotebookInstanceLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeNotebookInstanceLifecycleConfigRequest(request));
    setReply(reply);
}

const DescribeNotebookInstanceLifecycleConfigRequest * DescribeNotebookInstanceLifecycleConfigResponse::request() const
{
    Q_D(const DescribeNotebookInstanceLifecycleConfigResponse);
    return static_cast<const DescribeNotebookInstanceLifecycleConfigRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker DescribeNotebookInstanceLifecycleConfig response.
 *
 * @param  response  Response to parse.
 */
void DescribeNotebookInstanceLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeNotebookInstanceLifecycleConfigResponsePrivate
 *
 * @brief  Private implementation for DescribeNotebookInstanceLifecycleConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNotebookInstanceLifecycleConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeNotebookInstanceLifecycleConfigResponse instance.
 */
DescribeNotebookInstanceLifecycleConfigResponsePrivate::DescribeNotebookInstanceLifecycleConfigResponsePrivate(
    DescribeNotebookInstanceLifecycleConfigQueueResponse * const q) : DescribeNotebookInstanceLifecycleConfigPrivate(q)
{

}

/**
 * @brief  Parse an SageMaker DescribeNotebookInstanceLifecycleConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeNotebookInstanceLifecycleConfigResponsePrivate::DescribeNotebookInstanceLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotebookInstanceLifecycleConfigResponse"));
    /// @todo
}
