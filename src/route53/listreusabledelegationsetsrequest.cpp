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

#include "listreusabledelegationsetsrequest.h"
#include "listreusabledelegationsetsrequest_p.h"
#include "listreusabledelegationsetsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListReusableDelegationSetsRequest
 *
 * \brief The ListReusableDelegationSetsRequest class provides an interface for Route53 ListReusableDelegationSets requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::listReusableDelegationSets
 */

/*!
 * @brief  Constructs a new ListReusableDelegationSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListReusableDelegationSetsRequest::ListReusableDelegationSetsRequest(const ListReusableDelegationSetsRequest &other)
    : Route53Request(new ListReusableDelegationSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListReusableDelegationSetsRequest object.
 */
ListReusableDelegationSetsRequest::ListReusableDelegationSetsRequest()
    : Route53Request(new ListReusableDelegationSetsRequestPrivate(Route53Request::ListReusableDelegationSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReusableDelegationSetsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListReusableDelegationSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListReusableDelegationSetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * ListReusableDelegationSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListReusableDelegationSetsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListReusableDelegationSetsRequestPrivate
 *
 * @brief  Private implementation for ListReusableDelegationSetsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListReusableDelegationSetsRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListReusableDelegationSetsRequest instance.
 */
ListReusableDelegationSetsRequestPrivate::ListReusableDelegationSetsRequestPrivate(
    const Route53Request::Action action, ListReusableDelegationSetsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListReusableDelegationSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListReusableDelegationSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListReusableDelegationSetsRequest instance.
 */
ListReusableDelegationSetsRequestPrivate::ListReusableDelegationSetsRequestPrivate(
    const ListReusableDelegationSetsRequestPrivate &other, ListReusableDelegationSetsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
