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

#include "gethitresponse.h"
#include "gethitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/**
 * @class  GetHITResponse
 *
 * @brief  Handles MTurk GetHIT responses.
 *
 * @see    MTurkClient::getHIT
 */

/**
 * @brief  Constructs a new GetHITResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHITResponse::GetHITResponse(
        const GetHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetHITResponsePrivate(this), parent)
{
    setRequest(new GetHITRequest(request));
    setReply(reply);
}

const GetHITRequest * GetHITResponse::request() const
{
    Q_D(const GetHITResponse);
    return static_cast<const GetHITRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk GetHIT response.
 *
 * @param  response  Response to parse.
 */
void GetHITResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetHITResponsePrivate
 *
 * @brief  Private implementation for GetHITResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHITResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetHITResponse instance.
 */
GetHITResponsePrivate::GetHITResponsePrivate(
    GetHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/**
 * @brief  Parse an MTurk GetHITResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetHITResponsePrivate::parseGetHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHITResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
