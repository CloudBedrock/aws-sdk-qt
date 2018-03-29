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

#include "deletepipelineresponse.h"
#include "deletepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  DeletePipelineResponse
 *
 * @brief  Handles CodePipeline DeletePipeline responses.
 *
 * @see    CodePipelineClient::deletePipeline
 */

/**
 * @brief  Constructs a new DeletePipelineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePipelineResponse::DeletePipelineResponse(
        const DeletePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new DeletePipelineResponsePrivate(this), parent)
{
    setRequest(new DeletePipelineRequest(request));
    setReply(reply);
}

const DeletePipelineRequest * DeletePipelineResponse::request() const
{
    Q_D(const DeletePipelineResponse);
    return static_cast<const DeletePipelineRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline DeletePipeline response.
 *
 * @param  response  Response to parse.
 */
void DeletePipelineResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeletePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeletePipelineResponsePrivate
 *
 * @brief  Private implementation for DeletePipelineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePipelineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePipelineResponse instance.
 */
DeletePipelineResponsePrivate::DeletePipelineResponsePrivate(
    DeletePipelineResponse * const q) : CodePipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline DeletePipelineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePipelineResponsePrivate::DeletePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePipelineResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace QtAws
