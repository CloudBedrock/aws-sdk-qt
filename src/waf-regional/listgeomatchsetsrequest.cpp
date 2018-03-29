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

#include "listgeomatchsetsrequest.h"
#include "listgeomatchsetsrequest_p.h"
#include "listgeomatchsetsresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  ListGeoMatchSetsRequest
 *
 * @brief  Implements WAFRegional ListGeoMatchSets requests.
 *
 * @see    WAFRegionalClient::listGeoMatchSets
 */

/**
 * @brief  Constructs a new ListGeoMatchSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGeoMatchSetsRequest::ListGeoMatchSetsRequest(const ListGeoMatchSetsRequest &other)
    : WAFRegionalRequest(new ListGeoMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGeoMatchSetsRequest object.
 */
ListGeoMatchSetsRequest::ListGeoMatchSetsRequest()
    : WAFRegionalRequest(new ListGeoMatchSetsRequestPrivate(WAFRegionalRequest::ListGeoMatchSetsAction, this))
{

}

bool ListGeoMatchSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGeoMatchSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGeoMatchSetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGeoMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListGeoMatchSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGeoMatchSetsRequestPrivate
 *
 * @brief  Private implementation for ListGeoMatchSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGeoMatchSetsRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public ListGeoMatchSetsRequest instance.
 */
ListGeoMatchSetsRequestPrivate::ListGeoMatchSetsRequestPrivate(
    const WAFRegionalRequest::Action action, ListGeoMatchSetsRequest * const q)
    : ListGeoMatchSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGeoMatchSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGeoMatchSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGeoMatchSetsRequest instance.
 */
ListGeoMatchSetsRequestPrivate::ListGeoMatchSetsRequestPrivate(
    const ListGeoMatchSetsRequestPrivate &other, ListGeoMatchSetsRequest * const q)
    : ListGeoMatchSetsPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
