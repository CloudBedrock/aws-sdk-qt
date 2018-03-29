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

#include "deleteportfoliorequest.h"
#include "deleteportfoliorequest_p.h"
#include "deleteportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DeletePortfolioRequest
 *
 * @brief  Implements ServiceCatalog DeletePortfolio requests.
 *
 * @see    ServiceCatalogClient::deletePortfolio
 */

/**
 * @brief  Constructs a new DeletePortfolioRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePortfolioRequest::DeletePortfolioRequest(const DeletePortfolioRequest &other)
    : ServiceCatalogRequest(new DeletePortfolioRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePortfolioRequest object.
 */
DeletePortfolioRequest::DeletePortfolioRequest()
    : ServiceCatalogRequest(new DeletePortfolioRequestPrivate(ServiceCatalogRequest::DeletePortfolioAction, this))
{

}

bool DeletePortfolioRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePortfolioResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePortfolioResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePortfolioRequest::response(QNetworkReply * const reply) const
{
    return new DeletePortfolioResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePortfolioRequestPrivate
 *
 * @brief  Private implementation for DeletePortfolioRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePortfolioRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DeletePortfolioRequest instance.
 */
DeletePortfolioRequestPrivate::DeletePortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, DeletePortfolioRequest * const q)
    : DeletePortfolioPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePortfolioRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePortfolioRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePortfolioRequest instance.
 */
DeletePortfolioRequestPrivate::DeletePortfolioRequestPrivate(
    const DeletePortfolioRequestPrivate &other, DeletePortfolioRequest * const q)
    : DeletePortfolioPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
