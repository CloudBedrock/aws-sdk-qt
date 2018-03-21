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

#include "listtemplatesresponse.h"
#include "listtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  ListTemplatesResponse
 *
 * @brief  Handles SES ListTemplates responses.
 *
 * @see    SESClient::listTemplates
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTemplatesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new ListTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListTemplatesRequest(request));
    setReply(reply);
}

const ListTemplatesRequest * ListTemplatesResponse::request() const
{
    Q_D(const ListTemplatesResponse);
    return static_cast<const ListTemplatesRequest *>(d->request);
}

/**
 * @brief  Parse a SES ListTemplates response.
 *
 * @param  response  Response to parse.
 */
void ListTemplatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTemplatesResponsePrivate
 *
 * @brief  Private implementation for ListTemplatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTemplatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTemplatesResponse instance.
 */
ListTemplatesResponsePrivate::ListTemplatesResponsePrivate(
    ListTemplatesQueueResponse * const q) : ListTemplatesPrivate(q)
{

}

/**
 * @brief  Parse an SES ListTemplatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTemplatesResponsePrivate::ListTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTemplatesResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
