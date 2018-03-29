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

#include "putcomplianceitemsresponse.h"
#include "putcomplianceitemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  PutComplianceItemsResponse
 *
 * @brief  Handles SSM PutComplianceItems responses.
 *
 * @see    SSMClient::putComplianceItems
 */

/**
 * @brief  Constructs a new PutComplianceItemsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutComplianceItemsResponse::PutComplianceItemsResponse(
        const PutComplianceItemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new PutComplianceItemsResponsePrivate(this), parent)
{
    setRequest(new PutComplianceItemsRequest(request));
    setReply(reply);
}

const PutComplianceItemsRequest * PutComplianceItemsResponse::request() const
{
    Q_D(const PutComplianceItemsResponse);
    return static_cast<const PutComplianceItemsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM PutComplianceItems response.
 *
 * @param  response  Response to parse.
 */
void PutComplianceItemsResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutComplianceItemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutComplianceItemsResponsePrivate
 *
 * @brief  Private implementation for PutComplianceItemsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutComplianceItemsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutComplianceItemsResponse instance.
 */
PutComplianceItemsResponsePrivate::PutComplianceItemsResponsePrivate(
    PutComplianceItemsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM PutComplianceItemsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutComplianceItemsResponsePrivate::parsePutComplianceItemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutComplianceItemsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
