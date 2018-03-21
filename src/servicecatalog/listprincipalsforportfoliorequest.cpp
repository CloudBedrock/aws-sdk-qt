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

#include "listprincipalsforportfoliorequest.h"
#include "listprincipalsforportfoliorequest_p.h"
#include "listprincipalsforportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListPrincipalsForPortfolioRequest
 *
 * @brief  Implements ServiceCatalog ListPrincipalsForPortfolio requests.
 *
 * @see    ServiceCatalogClient::listPrincipalsForPortfolio
 */

/**
 * @brief  Constructs a new ListPrincipalsForPortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPrincipalsForPortfolioResponse::ListPrincipalsForPortfolioResponse(

/**
 * @brief  Constructs a new ListPrincipalsForPortfolioRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPrincipalsForPortfolioRequest::ListPrincipalsForPortfolioRequest(const ListPrincipalsForPortfolioRequest &other)
    : ServiceCatalogRequest(new ListPrincipalsForPortfolioRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPrincipalsForPortfolioRequest object.
 */
ListPrincipalsForPortfolioRequest::ListPrincipalsForPortfolioRequest()
    : ServiceCatalogRequest(new ListPrincipalsForPortfolioRequestPrivate(ServiceCatalogRequest::ListPrincipalsForPortfolioAction, this))
{

}

bool ListPrincipalsForPortfolioRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPrincipalsForPortfolioResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPrincipalsForPortfolioResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * ListPrincipalsForPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new ListPrincipalsForPortfolioResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPrincipalsForPortfolioRequestPrivate
 *
 * @brief  Private implementation for ListPrincipalsForPortfolioRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPrincipalsForPortfolioRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public ListPrincipalsForPortfolioRequest instance.
 */
ListPrincipalsForPortfolioRequestPrivate::ListPrincipalsForPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, ListPrincipalsForPortfolioRequest * const q)
    : ListPrincipalsForPortfolioPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPrincipalsForPortfolioRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPrincipalsForPortfolioRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPrincipalsForPortfolioRequest instance.
 */
ListPrincipalsForPortfolioRequestPrivate::ListPrincipalsForPortfolioRequestPrivate(
    const ListPrincipalsForPortfolioRequestPrivate &other, ListPrincipalsForPortfolioRequest * const q)
    : ListPrincipalsForPortfolioPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
