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

#include "getoperationdetailresponse.h"
#include "getoperationdetailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/**
 * @class  GetOperationDetailResponse
 *
 * @brief  Handles Route53Domains GetOperationDetail responses.
 *
 * @see    Route53DomainsClient::getOperationDetail
 */

/**
 * @brief  Constructs a new GetOperationDetailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOperationDetailResponse::GetOperationDetailResponse(
        const GetOperationDetailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetOperationDetailResponse(new GetOperationDetailResponsePrivate(this), parent)
{
    setRequest(new GetOperationDetailRequest(request));
    setReply(reply);
}

const GetOperationDetailRequest * GetOperationDetailResponse::request() const
{
    Q_D(const GetOperationDetailResponse);
    return static_cast<const GetOperationDetailRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains GetOperationDetail response.
 *
 * @param  response  Response to parse.
 */
void GetOperationDetailResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetOperationDetailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetOperationDetailResponsePrivate
 *
 * @brief  Private implementation for GetOperationDetailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOperationDetailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetOperationDetailResponse instance.
 */
GetOperationDetailResponsePrivate::GetOperationDetailResponsePrivate(
    GetOperationDetailResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains GetOperationDetailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetOperationDetailResponsePrivate::parseGetOperationDetailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOperationDetailResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
