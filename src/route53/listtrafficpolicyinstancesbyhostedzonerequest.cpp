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

#include "listtrafficpolicyinstancesbyhostedzonerequest.h"
#include "listtrafficpolicyinstancesbyhostedzonerequest_p.h"
#include "listtrafficpolicyinstancesbyhostedzoneresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByHostedZoneRequest
 *
 * \brief The ListTrafficPolicyInstancesByHostedZoneRequest class provides an interface for Route53 ListTrafficPolicyInstancesByHostedZone requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::listTrafficPolicyInstancesByHostedZone
 */

/*!
 * @brief  Constructs a new ListTrafficPolicyInstancesByHostedZoneRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTrafficPolicyInstancesByHostedZoneRequest::ListTrafficPolicyInstancesByHostedZoneRequest(const ListTrafficPolicyInstancesByHostedZoneRequest &other)
    : Route53Request(new ListTrafficPolicyInstancesByHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListTrafficPolicyInstancesByHostedZoneRequest object.
 */
ListTrafficPolicyInstancesByHostedZoneRequest::ListTrafficPolicyInstancesByHostedZoneRequest()
    : Route53Request(new ListTrafficPolicyInstancesByHostedZoneRequestPrivate(Route53Request::ListTrafficPolicyInstancesByHostedZoneAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrafficPolicyInstancesByHostedZoneRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListTrafficPolicyInstancesByHostedZoneResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTrafficPolicyInstancesByHostedZoneResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * ListTrafficPolicyInstancesByHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new ListTrafficPolicyInstancesByHostedZoneResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListTrafficPolicyInstancesByHostedZoneRequestPrivate
 *
 * @brief  Private implementation for ListTrafficPolicyInstancesByHostedZoneRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyInstancesByHostedZoneRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListTrafficPolicyInstancesByHostedZoneRequest instance.
 */
ListTrafficPolicyInstancesByHostedZoneRequestPrivate::ListTrafficPolicyInstancesByHostedZoneRequestPrivate(
    const Route53Request::Action action, ListTrafficPolicyInstancesByHostedZoneRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyInstancesByHostedZoneRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTrafficPolicyInstancesByHostedZoneRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTrafficPolicyInstancesByHostedZoneRequest instance.
 */
ListTrafficPolicyInstancesByHostedZoneRequestPrivate::ListTrafficPolicyInstancesByHostedZoneRequestPrivate(
    const ListTrafficPolicyInstancesByHostedZoneRequestPrivate &other, ListTrafficPolicyInstancesByHostedZoneRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
