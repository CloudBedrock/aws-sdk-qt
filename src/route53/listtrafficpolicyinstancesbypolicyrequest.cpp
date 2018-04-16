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

#include "listtrafficpolicyinstancesbypolicyrequest.h"
#include "listtrafficpolicyinstancesbypolicyrequest_p.h"
#include "listtrafficpolicyinstancesbypolicyresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByPolicyRequest
 *
 * \brief The ListTrafficPolicyInstancesByPolicyRequest class provides an interface for Route53 ListTrafficPolicyInstancesByPolicy requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::listTrafficPolicyInstancesByPolicy
 */

/*!
 * @brief  Constructs a new ListTrafficPolicyInstancesByPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTrafficPolicyInstancesByPolicyRequest::ListTrafficPolicyInstancesByPolicyRequest(const ListTrafficPolicyInstancesByPolicyRequest &other)
    : Route53Request(new ListTrafficPolicyInstancesByPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListTrafficPolicyInstancesByPolicyRequest object.
 */
ListTrafficPolicyInstancesByPolicyRequest::ListTrafficPolicyInstancesByPolicyRequest()
    : Route53Request(new ListTrafficPolicyInstancesByPolicyRequestPrivate(Route53Request::ListTrafficPolicyInstancesByPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrafficPolicyInstancesByPolicyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListTrafficPolicyInstancesByPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTrafficPolicyInstancesByPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * ListTrafficPolicyInstancesByPolicyRequest::response(QNetworkReply * const reply) const
{
    return new ListTrafficPolicyInstancesByPolicyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListTrafficPolicyInstancesByPolicyRequestPrivate
 *
 * @brief  Private implementation for ListTrafficPolicyInstancesByPolicyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyInstancesByPolicyRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListTrafficPolicyInstancesByPolicyRequest instance.
 */
ListTrafficPolicyInstancesByPolicyRequestPrivate::ListTrafficPolicyInstancesByPolicyRequestPrivate(
    const Route53Request::Action action, ListTrafficPolicyInstancesByPolicyRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyInstancesByPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTrafficPolicyInstancesByPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTrafficPolicyInstancesByPolicyRequest instance.
 */
ListTrafficPolicyInstancesByPolicyRequestPrivate::ListTrafficPolicyInstancesByPolicyRequestPrivate(
    const ListTrafficPolicyInstancesByPolicyRequestPrivate &other, ListTrafficPolicyInstancesByPolicyRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
