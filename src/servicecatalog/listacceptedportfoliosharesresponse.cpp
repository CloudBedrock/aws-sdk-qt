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

#include "listacceptedportfoliosharesresponse.h"
#include "listacceptedportfoliosharesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  ListAcceptedPortfolioSharesResponse
 *
 * @brief  Handles ServiceCatalog ListAcceptedPortfolioShares responses.
 *
 * @see    ServiceCatalogClient::listAcceptedPortfolioShares
 */

/**
 * @brief  Constructs a new ListAcceptedPortfolioSharesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAcceptedPortfolioSharesResponse::ListAcceptedPortfolioSharesResponse(
        const ListAcceptedPortfolioSharesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListAcceptedPortfolioSharesResponsePrivate(this), parent)
{
    setRequest(new ListAcceptedPortfolioSharesRequest(request));
    setReply(reply);
}

const ListAcceptedPortfolioSharesRequest * ListAcceptedPortfolioSharesResponse::request() const
{
    Q_D(const ListAcceptedPortfolioSharesResponse);
    return static_cast<const ListAcceptedPortfolioSharesRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ListAcceptedPortfolioShares response.
 *
 * @param  response  Response to parse.
 */
void ListAcceptedPortfolioSharesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAcceptedPortfolioSharesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAcceptedPortfolioSharesResponsePrivate
 *
 * @brief  Private implementation for ListAcceptedPortfolioSharesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAcceptedPortfolioSharesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAcceptedPortfolioSharesResponse instance.
 */
ListAcceptedPortfolioSharesResponsePrivate::ListAcceptedPortfolioSharesResponsePrivate(
    ListAcceptedPortfolioSharesResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ListAcceptedPortfolioSharesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAcceptedPortfolioSharesResponsePrivate::parseListAcceptedPortfolioSharesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAcceptedPortfolioSharesResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
