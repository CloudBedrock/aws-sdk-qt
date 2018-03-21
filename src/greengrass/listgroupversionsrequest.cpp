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

#include "listgroupversionsrequest.h"
#include "listgroupversionsrequest_p.h"
#include "listgroupversionsresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  ListGroupVersionsRequest
 *
 * @brief  Implements Greengrass ListGroupVersions requests.
 *
 * @see    GreengrassClient::listGroupVersions
 */

/**
 * @brief  Constructs a new ListGroupVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGroupVersionsResponse::ListGroupVersionsResponse(

/**
 * @brief  Constructs a new ListGroupVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGroupVersionsRequest::ListGroupVersionsRequest(const ListGroupVersionsRequest &other)
    : GreengrassRequest(new ListGroupVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGroupVersionsRequest object.
 */
ListGroupVersionsRequest::ListGroupVersionsRequest()
    : GreengrassRequest(new ListGroupVersionsRequestPrivate(GreengrassRequest::ListGroupVersionsAction, this))
{

}

bool ListGroupVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGroupVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGroupVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * ListGroupVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGroupVersionsRequestPrivate
 *
 * @brief  Private implementation for ListGroupVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupVersionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListGroupVersionsRequest instance.
 */
ListGroupVersionsRequestPrivate::ListGroupVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListGroupVersionsRequest * const q)
    : ListGroupVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGroupVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGroupVersionsRequest instance.
 */
ListGroupVersionsRequestPrivate::ListGroupVersionsRequestPrivate(
    const ListGroupVersionsRequestPrivate &other, ListGroupVersionsRequest * const q)
    : ListGroupVersionsPrivate(other, q)
{

}
