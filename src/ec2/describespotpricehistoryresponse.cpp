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

#include "describespotpricehistoryresponse.h"
#include "describespotpricehistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeSpotPriceHistoryResponse
 *
 * @brief  Handles EC2 DescribeSpotPriceHistory responses.
 *
 * @see    EC2Client::describeSpotPriceHistory
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSpotPriceHistoryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeSpotPriceHistoryResponsePrivate(this), parent)
{
    setRequest(new DescribeSpotPriceHistoryRequest(request));
    setReply(reply);
}

const DescribeSpotPriceHistoryRequest * DescribeSpotPriceHistoryResponse::request() const
{
    Q_D(const DescribeSpotPriceHistoryResponse);
    return static_cast<const DescribeSpotPriceHistoryRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeSpotPriceHistory response.
 *
 * @param  response  Response to parse.
 */
void DescribeSpotPriceHistoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSpotPriceHistoryResponsePrivate
 *
 * @brief  Private implementation for DescribeSpotPriceHistoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotPriceHistoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSpotPriceHistoryResponse instance.
 */
DescribeSpotPriceHistoryResponsePrivate::DescribeSpotPriceHistoryResponsePrivate(
    DescribeSpotPriceHistoryQueueResponse * const q) : DescribeSpotPriceHistoryPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeSpotPriceHistoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSpotPriceHistoryResponsePrivate::DescribeSpotPriceHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSpotPriceHistoryResponse"));
    /// @todo
}
