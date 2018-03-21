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

#include "getqualificationtyperesponse.h"
#include "getqualificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  GetQualificationTypeResponse
 *
 * @brief  Handles MTurk GetQualificationType responses.
 *
 * @see    MTurkClient::getQualificationType
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetQualificationTypeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new GetQualificationTypeRequest(request));
    setReply(reply);
}

const GetQualificationTypeRequest * GetQualificationTypeResponse::request() const
{
    Q_D(const GetQualificationTypeResponse);
    return static_cast<const GetQualificationTypeRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk GetQualificationType response.
 *
 * @param  response  Response to parse.
 */
void GetQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetQualificationTypeResponsePrivate
 *
 * @brief  Private implementation for GetQualificationTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQualificationTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetQualificationTypeResponse instance.
 */
GetQualificationTypeResponsePrivate::GetQualificationTypeResponsePrivate(
    GetQualificationTypeQueueResponse * const q) : GetQualificationTypePrivate(q)
{

}

/**
 * @brief  Parse an MTurk GetQualificationTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetQualificationTypeResponsePrivate::GetQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQualificationTypeResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
