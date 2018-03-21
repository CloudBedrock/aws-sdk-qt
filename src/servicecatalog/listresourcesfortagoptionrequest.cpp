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

#include "listresourcesfortagoptionrequest.h"
#include "listresourcesfortagoptionrequest_p.h"
#include "listresourcesfortagoptionresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListResourcesForTagOptionRequest
 *
 * @brief  Implements ServiceCatalog ListResourcesForTagOption requests.
 *
 * @see    ServiceCatalogClient::listResourcesForTagOption
 */

/**
 * @brief  Constructs a new ListResourcesForTagOptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourcesForTagOptionResponse::ListResourcesForTagOptionResponse(

/**
 * @brief  Constructs a new ListResourcesForTagOptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListResourcesForTagOptionRequest::ListResourcesForTagOptionRequest(const ListResourcesForTagOptionRequest &other)
    : ServiceCatalogRequest(new ListResourcesForTagOptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListResourcesForTagOptionRequest object.
 */
ListResourcesForTagOptionRequest::ListResourcesForTagOptionRequest()
    : ServiceCatalogRequest(new ListResourcesForTagOptionRequestPrivate(ServiceCatalogRequest::ListResourcesForTagOptionAction, this))
{

}

bool ListResourcesForTagOptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListResourcesForTagOptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListResourcesForTagOptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * ListResourcesForTagOptionRequest::response(QNetworkReply * const reply) const
{
    return new ListResourcesForTagOptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListResourcesForTagOptionRequestPrivate
 *
 * @brief  Private implementation for ListResourcesForTagOptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourcesForTagOptionRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public ListResourcesForTagOptionRequest instance.
 */
ListResourcesForTagOptionRequestPrivate::ListResourcesForTagOptionRequestPrivate(
    const ServiceCatalogRequest::Action action, ListResourcesForTagOptionRequest * const q)
    : ListResourcesForTagOptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListResourcesForTagOptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListResourcesForTagOptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListResourcesForTagOptionRequest instance.
 */
ListResourcesForTagOptionRequestPrivate::ListResourcesForTagOptionRequestPrivate(
    const ListResourcesForTagOptionRequestPrivate &other, ListResourcesForTagOptionRequest * const q)
    : ListResourcesForTagOptionPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
