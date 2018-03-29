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

#include "listrecordhistoryresponse.h"
#include "listrecordhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  ListRecordHistoryResponse
 *
 * @brief  Handles ServiceCatalog ListRecordHistory responses.
 *
 * @see    ServiceCatalogClient::listRecordHistory
 */

/**
 * @brief  Constructs a new ListRecordHistoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRecordHistoryResponse::ListRecordHistoryResponse(
        const ListRecordHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListRecordHistoryResponsePrivate(this), parent)
{
    setRequest(new ListRecordHistoryRequest(request));
    setReply(reply);
}

const ListRecordHistoryRequest * ListRecordHistoryResponse::request() const
{
    Q_D(const ListRecordHistoryResponse);
    return static_cast<const ListRecordHistoryRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ListRecordHistory response.
 *
 * @param  response  Response to parse.
 */
void ListRecordHistoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRecordHistoryResponsePrivate
 *
 * @brief  Private implementation for ListRecordHistoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRecordHistoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRecordHistoryResponse instance.
 */
ListRecordHistoryResponsePrivate::ListRecordHistoryResponsePrivate(
    ListRecordHistoryResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ListRecordHistoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRecordHistoryResponsePrivate::ListRecordHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecordHistoryResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
