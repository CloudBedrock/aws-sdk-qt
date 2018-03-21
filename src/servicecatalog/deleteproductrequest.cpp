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

#include "deleteproductrequest.h"
#include "deleteproductrequest_p.h"
#include "deleteproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DeleteProductRequest
 *
 * @brief  Implements ServiceCatalog DeleteProduct requests.
 *
 * @see    ServiceCatalogClient::deleteProduct
 */

/**
 * @brief  Constructs a new DeleteProductRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteProductRequest::DeleteProductRequest(const DeleteProductRequest &other)
    : ServiceCatalogRequest(new DeleteProductRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteProductRequest object.
 */
DeleteProductRequest::DeleteProductRequest()
    : ServiceCatalogRequest(new DeleteProductRequestPrivate(ServiceCatalogRequest::DeleteProductAction, this))
{

}

bool DeleteProductRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteProductResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteProductResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DeleteProductRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProductResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteProductRequestPrivate
 *
 * @brief  Private implementation for DeleteProductRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProductRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DeleteProductRequest instance.
 */
DeleteProductRequestPrivate::DeleteProductRequestPrivate(
    const ServiceCatalogRequest::Action action, DeleteProductRequest * const q)
    : DeleteProductPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProductRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteProductRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteProductRequest instance.
 */
DeleteProductRequestPrivate::DeleteProductRequestPrivate(
    const DeleteProductRequestPrivate &other, DeleteProductRequest * const q)
    : DeleteProductPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
