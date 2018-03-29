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

#include "gettracesummariesresponse.h"
#include "gettracesummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/**
 * @class  GetTraceSummariesResponse
 *
 * @brief  Handles XRay GetTraceSummaries responses.
 *
 * @see    XRayClient::getTraceSummaries
 */

/**
 * @brief  Constructs a new GetTraceSummariesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTraceSummariesResponse::GetTraceSummariesResponse(
        const GetTraceSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetTraceSummariesResponsePrivate(this), parent)
{
    setRequest(new GetTraceSummariesRequest(request));
    setReply(reply);
}

const GetTraceSummariesRequest * GetTraceSummariesResponse::request() const
{
    Q_D(const GetTraceSummariesResponse);
    return static_cast<const GetTraceSummariesRequest *>(d->request);
}

/**
 * @brief  Parse a XRay GetTraceSummaries response.
 *
 * @param  response  Response to parse.
 */
void GetTraceSummariesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTraceSummariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTraceSummariesResponsePrivate
 *
 * @brief  Private implementation for GetTraceSummariesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTraceSummariesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTraceSummariesResponse instance.
 */
GetTraceSummariesResponsePrivate::GetTraceSummariesResponsePrivate(
    GetTraceSummariesResponse * const q) : XRayResponsePrivate(q)
{

}

/**
 * @brief  Parse an XRay GetTraceSummariesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTraceSummariesResponsePrivate::parseGetTraceSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTraceSummariesResponse"));
    /// @todo
}

} // namespace XRay
} // namespace QtAws
