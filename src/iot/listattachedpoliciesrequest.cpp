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

#include "listattachedpoliciesrequest.h"
#include "listattachedpoliciesrequest_p.h"
#include "listattachedpoliciesresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListAttachedPoliciesRequest
 *
 * @brief  Implements IoT ListAttachedPolicies requests.
 *
 * @see    IoTClient::listAttachedPolicies
 */

/**
 * @brief  Constructs a new ListAttachedPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAttachedPoliciesResponse::ListAttachedPoliciesResponse(

/**
 * @brief  Constructs a new ListAttachedPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAttachedPoliciesRequest::ListAttachedPoliciesRequest(const ListAttachedPoliciesRequest &other)
    : IoTRequest(new ListAttachedPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAttachedPoliciesRequest object.
 */
ListAttachedPoliciesRequest::ListAttachedPoliciesRequest()
    : IoTRequest(new ListAttachedPoliciesRequestPrivate(IoTRequest::ListAttachedPoliciesAction, this))
{

}

bool ListAttachedPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAttachedPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAttachedPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListAttachedPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListAttachedPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAttachedPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListAttachedPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedPoliciesRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListAttachedPoliciesRequest instance.
 */
ListAttachedPoliciesRequestPrivate::ListAttachedPoliciesRequestPrivate(
    const IoTRequest::Action action, ListAttachedPoliciesRequest * const q)
    : ListAttachedPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAttachedPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAttachedPoliciesRequest instance.
 */
ListAttachedPoliciesRequestPrivate::ListAttachedPoliciesRequestPrivate(
    const ListAttachedPoliciesRequestPrivate &other, ListAttachedPoliciesRequest * const q)
    : ListAttachedPoliciesPrivate(other, q)
{

}
