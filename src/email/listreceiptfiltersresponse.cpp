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

#include "listreceiptfiltersresponse.h"
#include "listreceiptfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  ListReceiptFiltersResponse
 *
 * @brief  Handles SES ListReceiptFilters responses.
 *
 * @see    SESClient::listReceiptFilters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListReceiptFiltersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new ListReceiptFiltersResponsePrivate(this), parent)
{
    setRequest(new ListReceiptFiltersRequest(request));
    setReply(reply);
}

const ListReceiptFiltersRequest * ListReceiptFiltersResponse::request() const
{
    Q_D(const ListReceiptFiltersResponse);
    return static_cast<const ListReceiptFiltersRequest *>(d->request);
}

/**
 * @brief  Parse a SES ListReceiptFilters response.
 *
 * @param  response  Response to parse.
 */
void ListReceiptFiltersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListReceiptFiltersResponsePrivate
 *
 * @brief  Private implementation for ListReceiptFiltersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListReceiptFiltersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListReceiptFiltersResponse instance.
 */
ListReceiptFiltersResponsePrivate::ListReceiptFiltersResponsePrivate(
    ListReceiptFiltersQueueResponse * const q) : ListReceiptFiltersPrivate(q)
{

}

/**
 * @brief  Parse an SES ListReceiptFiltersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListReceiptFiltersResponsePrivate::ListReceiptFiltersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReceiptFiltersResponse"));
    /// @todo
}
