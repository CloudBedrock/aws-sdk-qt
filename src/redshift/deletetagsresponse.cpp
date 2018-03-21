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

#include "deletetagsresponse.h"
#include "deletetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DeleteTagsResponse
 *
 * @brief  Handles Redshift DeleteTags responses.
 *
 * @see    RedshiftClient::deleteTags
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTagsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DeleteTagsResponsePrivate(this), parent)
{
    setRequest(new DeleteTagsRequest(request));
    setReply(reply);
}

const DeleteTagsRequest * DeleteTagsResponse::request() const
{
    Q_D(const DeleteTagsResponse);
    return static_cast<const DeleteTagsRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DeleteTags response.
 *
 * @param  response  Response to parse.
 */
void DeleteTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTagsResponsePrivate
 *
 * @brief  Private implementation for DeleteTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTagsResponse instance.
 */
DeleteTagsResponsePrivate::DeleteTagsResponsePrivate(
    DeleteTagsQueueResponse * const q) : DeleteTagsPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DeleteTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTagsResponsePrivate::DeleteTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTagsResponse"));
    /// @todo
}
