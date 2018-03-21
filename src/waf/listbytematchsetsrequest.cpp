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

#include "listbytematchsetsrequest.h"
#include "listbytematchsetsrequest_p.h"
#include "listbytematchsetsresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  ListByteMatchSetsRequest
 *
 * @brief  Implements WAF ListByteMatchSets requests.
 *
 * @see    WAFClient::listByteMatchSets
 */

/**
 * @brief  Constructs a new ListByteMatchSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListByteMatchSetsResponse::ListByteMatchSetsResponse(

/**
 * @brief  Constructs a new ListByteMatchSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListByteMatchSetsRequest::ListByteMatchSetsRequest(const ListByteMatchSetsRequest &other)
    : WAFRequest(new ListByteMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListByteMatchSetsRequest object.
 */
ListByteMatchSetsRequest::ListByteMatchSetsRequest()
    : WAFRequest(new ListByteMatchSetsRequestPrivate(WAFRequest::ListByteMatchSetsAction, this))
{

}

bool ListByteMatchSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListByteMatchSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListByteMatchSetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * ListByteMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListByteMatchSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListByteMatchSetsRequestPrivate
 *
 * @brief  Private implementation for ListByteMatchSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListByteMatchSetsRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public ListByteMatchSetsRequest instance.
 */
ListByteMatchSetsRequestPrivate::ListByteMatchSetsRequestPrivate(
    const WAFRequest::Action action, ListByteMatchSetsRequest * const q)
    : ListByteMatchSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListByteMatchSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListByteMatchSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListByteMatchSetsRequest instance.
 */
ListByteMatchSetsRequestPrivate::ListByteMatchSetsRequestPrivate(
    const ListByteMatchSetsRequestPrivate &other, ListByteMatchSetsRequest * const q)
    : ListByteMatchSetsPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
