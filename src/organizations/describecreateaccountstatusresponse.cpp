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

#include "describecreateaccountstatusresponse.h"
#include "describecreateaccountstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  DescribeCreateAccountStatusResponse
 *
 * @brief  Handles Organizations DescribeCreateAccountStatus responses.
 *
 * @see    OrganizationsClient::describeCreateAccountStatus
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCreateAccountStatusResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DescribeCreateAccountStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeCreateAccountStatusRequest(request));
    setReply(reply);
}

const DescribeCreateAccountStatusRequest * DescribeCreateAccountStatusResponse::request() const
{
    Q_D(const DescribeCreateAccountStatusResponse);
    return static_cast<const DescribeCreateAccountStatusRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations DescribeCreateAccountStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeCreateAccountStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCreateAccountStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeCreateAccountStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCreateAccountStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCreateAccountStatusResponse instance.
 */
DescribeCreateAccountStatusResponsePrivate::DescribeCreateAccountStatusResponsePrivate(
    DescribeCreateAccountStatusQueueResponse * const q) : DescribeCreateAccountStatusPrivate(q)
{

}

/**
 * @brief  Parse an Organizations DescribeCreateAccountStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCreateAccountStatusResponsePrivate::DescribeCreateAccountStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCreateAccountStatusResponse"));
    /// @todo
}
