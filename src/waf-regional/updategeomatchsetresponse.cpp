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

#include "updategeomatchsetresponse.h"
#include "updategeomatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  UpdateGeoMatchSetResponse
 *
 * @brief  Handles WAFRegional UpdateGeoMatchSet responses.
 *
 * @see    WAFRegionalClient::updateGeoMatchSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGeoMatchSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new UpdateGeoMatchSetResponsePrivate(this), parent)
{
    setRequest(new UpdateGeoMatchSetRequest(request));
    setReply(reply);
}

const UpdateGeoMatchSetRequest * UpdateGeoMatchSetResponse::request() const
{
    Q_D(const UpdateGeoMatchSetResponse);
    return static_cast<const UpdateGeoMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional UpdateGeoMatchSet response.
 *
 * @param  response  Response to parse.
 */
void UpdateGeoMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateGeoMatchSetResponsePrivate
 *
 * @brief  Private implementation for UpdateGeoMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGeoMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateGeoMatchSetResponse instance.
 */
UpdateGeoMatchSetResponsePrivate::UpdateGeoMatchSetResponsePrivate(
    UpdateGeoMatchSetQueueResponse * const q) : UpdateGeoMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional UpdateGeoMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateGeoMatchSetResponsePrivate::UpdateGeoMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGeoMatchSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
