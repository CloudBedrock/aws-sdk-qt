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

#include "getjobunlockcoderesponse.h"
#include "getjobunlockcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Snowball {

/**
 * @class  GetJobUnlockCodeResponse
 *
 * @brief  Handles Snowball GetJobUnlockCode responses.
 *
 * @see    SnowballClient::getJobUnlockCode
 */

/**
 * @brief  Constructs a new GetJobUnlockCodeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobUnlockCodeResponse::GetJobUnlockCodeResponse(
        const GetJobUnlockCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new GetJobUnlockCodeResponsePrivate(this), parent)
{
    setRequest(new GetJobUnlockCodeRequest(request));
    setReply(reply);
}

const GetJobUnlockCodeRequest * GetJobUnlockCodeResponse::request() const
{
    Q_D(const GetJobUnlockCodeResponse);
    return static_cast<const GetJobUnlockCodeRequest *>(d->request);
}

/**
 * @brief  Parse a Snowball GetJobUnlockCode response.
 *
 * @param  response  Response to parse.
 */
void GetJobUnlockCodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetJobUnlockCodeResponsePrivate
 *
 * @brief  Private implementation for GetJobUnlockCodeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobUnlockCodeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobUnlockCodeResponse instance.
 */
GetJobUnlockCodeResponsePrivate::GetJobUnlockCodeResponsePrivate(
    GetJobUnlockCodeQueueResponse * const q) : GetJobUnlockCodePrivate(q)
{

}

/**
 * @brief  Parse an Snowball GetJobUnlockCodeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobUnlockCodeResponsePrivate::GetJobUnlockCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobUnlockCodeResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace AWS
