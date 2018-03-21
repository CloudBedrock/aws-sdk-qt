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

#include "getregexmatchsetresponse.h"
#include "getregexmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  GetRegexMatchSetResponse
 *
 * @brief  Handles WAF GetRegexMatchSet responses.
 *
 * @see    WAFClient::getRegexMatchSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRegexMatchSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetRegexMatchSetResponsePrivate(this), parent)
{
    setRequest(new GetRegexMatchSetRequest(request));
    setReply(reply);
}

const GetRegexMatchSetRequest * GetRegexMatchSetResponse::request() const
{
    Q_D(const GetRegexMatchSetResponse);
    return static_cast<const GetRegexMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF GetRegexMatchSet response.
 *
 * @param  response  Response to parse.
 */
void GetRegexMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRegexMatchSetResponsePrivate
 *
 * @brief  Private implementation for GetRegexMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRegexMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRegexMatchSetResponse instance.
 */
GetRegexMatchSetResponsePrivate::GetRegexMatchSetResponsePrivate(
    GetRegexMatchSetQueueResponse * const q) : GetRegexMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF GetRegexMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRegexMatchSetResponsePrivate::GetRegexMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegexMatchSetResponse"));
    /// @todo
}
