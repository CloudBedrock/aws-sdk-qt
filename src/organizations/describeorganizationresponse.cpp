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

#include "describeorganizationresponse.h"
#include "describeorganizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  DescribeOrganizationResponse
 *
 * @brief  Handles Organizations DescribeOrganization responses.
 *
 * @see    OrganizationsClient::describeOrganization
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeOrganizationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DescribeOrganizationResponsePrivate(this), parent)
{
    setRequest(new DescribeOrganizationRequest(request));
    setReply(reply);
}

const DescribeOrganizationRequest * DescribeOrganizationResponse::request() const
{
    Q_D(const DescribeOrganizationResponse);
    return static_cast<const DescribeOrganizationRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations DescribeOrganization response.
 *
 * @param  response  Response to parse.
 */
void DescribeOrganizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeOrganizationResponsePrivate
 *
 * @brief  Private implementation for DescribeOrganizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrganizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeOrganizationResponse instance.
 */
DescribeOrganizationResponsePrivate::DescribeOrganizationResponsePrivate(
    DescribeOrganizationQueueResponse * const q) : DescribeOrganizationPrivate(q)
{

}

/**
 * @brief  Parse an Organizations DescribeOrganizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeOrganizationResponsePrivate::DescribeOrganizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOrganizationResponse"));
    /// @todo
}
