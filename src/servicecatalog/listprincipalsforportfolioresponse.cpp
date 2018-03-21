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

#include "listprincipalsforportfolioresponse.h"
#include "listprincipalsforportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListPrincipalsForPortfolioResponse
 *
 * @brief  Handles ServiceCatalog ListPrincipalsForPortfolio responses.
 *
 * @see    ServiceCatalogClient::listPrincipalsForPortfolio
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPrincipalsForPortfolioResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListPrincipalsForPortfolioResponsePrivate(this), parent)
{
    setRequest(new ListPrincipalsForPortfolioRequest(request));
    setReply(reply);
}

const ListPrincipalsForPortfolioRequest * ListPrincipalsForPortfolioResponse::request() const
{
    Q_D(const ListPrincipalsForPortfolioResponse);
    return static_cast<const ListPrincipalsForPortfolioRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ListPrincipalsForPortfolio response.
 *
 * @param  response  Response to parse.
 */
void ListPrincipalsForPortfolioResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPrincipalsForPortfolioResponsePrivate
 *
 * @brief  Private implementation for ListPrincipalsForPortfolioResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPrincipalsForPortfolioResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPrincipalsForPortfolioResponse instance.
 */
ListPrincipalsForPortfolioResponsePrivate::ListPrincipalsForPortfolioResponsePrivate(
    ListPrincipalsForPortfolioQueueResponse * const q) : ListPrincipalsForPortfolioPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ListPrincipalsForPortfolioResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPrincipalsForPortfolioResponsePrivate::ListPrincipalsForPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPrincipalsForPortfolioResponse"));
    /// @todo
}
