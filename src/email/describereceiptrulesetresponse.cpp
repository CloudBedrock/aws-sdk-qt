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

#include "describereceiptrulesetresponse.h"
#include "describereceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  DescribeReceiptRuleSetResponse
 *
 * @brief  Handles SES DescribeReceiptRuleSet responses.
 *
 * @see    SESClient::describeReceiptRuleSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReceiptRuleSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DescribeReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new DescribeReceiptRuleSetRequest(request));
    setReply(reply);
}

const DescribeReceiptRuleSetRequest * DescribeReceiptRuleSetResponse::request() const
{
    Q_D(const DescribeReceiptRuleSetResponse);
    return static_cast<const DescribeReceiptRuleSetRequest *>(d->request);
}

/**
 * @brief  Parse a SES DescribeReceiptRuleSet response.
 *
 * @param  response  Response to parse.
 */
void DescribeReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReceiptRuleSetResponsePrivate
 *
 * @brief  Private implementation for DescribeReceiptRuleSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReceiptRuleSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReceiptRuleSetResponse instance.
 */
DescribeReceiptRuleSetResponsePrivate::DescribeReceiptRuleSetResponsePrivate(
    DescribeReceiptRuleSetQueueResponse * const q) : DescribeReceiptRuleSetPrivate(q)
{

}

/**
 * @brief  Parse an SES DescribeReceiptRuleSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReceiptRuleSetResponsePrivate::DescribeReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReceiptRuleSetResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
