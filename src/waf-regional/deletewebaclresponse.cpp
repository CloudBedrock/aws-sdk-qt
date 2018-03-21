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

#include "deletewebaclresponse.h"
#include "deletewebaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  DeleteWebACLResponse
 *
 * @brief  Handles WAFRegional DeleteWebACL responses.
 *
 * @see    WAFRegionalClient::deleteWebACL
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteWebACLResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new DeleteWebACLResponsePrivate(this), parent)
{
    setRequest(new DeleteWebACLRequest(request));
    setReply(reply);
}

const DeleteWebACLRequest * DeleteWebACLResponse::request() const
{
    Q_D(const DeleteWebACLResponse);
    return static_cast<const DeleteWebACLRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional DeleteWebACL response.
 *
 * @param  response  Response to parse.
 */
void DeleteWebACLResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteWebACLResponsePrivate
 *
 * @brief  Private implementation for DeleteWebACLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteWebACLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteWebACLResponse instance.
 */
DeleteWebACLResponsePrivate::DeleteWebACLResponsePrivate(
    DeleteWebACLQueueResponse * const q) : DeleteWebACLPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional DeleteWebACLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteWebACLResponsePrivate::DeleteWebACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWebACLResponse"));
    /// @todo
}
