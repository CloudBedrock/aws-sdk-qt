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

#include "getsizeconstraintsetresponse.h"
#include "getsizeconstraintsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetSizeConstraintSetResponse
 *
 * @brief  Handles WAFRegional GetSizeConstraintSet responses.
 *
 * @see    WAFRegionalClient::getSizeConstraintSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSizeConstraintSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetSizeConstraintSetResponsePrivate(this), parent)
{
    setRequest(new GetSizeConstraintSetRequest(request));
    setReply(reply);
}

const GetSizeConstraintSetRequest * GetSizeConstraintSetResponse::request() const
{
    Q_D(const GetSizeConstraintSetResponse);
    return static_cast<const GetSizeConstraintSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional GetSizeConstraintSet response.
 *
 * @param  response  Response to parse.
 */
void GetSizeConstraintSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSizeConstraintSetResponsePrivate
 *
 * @brief  Private implementation for GetSizeConstraintSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSizeConstraintSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSizeConstraintSetResponse instance.
 */
GetSizeConstraintSetResponsePrivate::GetSizeConstraintSetResponsePrivate(
    GetSizeConstraintSetQueueResponse * const q) : GetSizeConstraintSetPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional GetSizeConstraintSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSizeConstraintSetResponsePrivate::GetSizeConstraintSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSizeConstraintSetResponse"));
    /// @todo
}
