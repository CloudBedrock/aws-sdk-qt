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

#include "listdomainsrequest.h"
#include "listdomainsrequest_p.h"
#include "listdomainsresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ListDomainsRequest
 *
 * \brief The ListDomainsRequest class provides an interface for Route53Domains ListDomains requests.
 *
 * \ingroup Route53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::listDomains
 */

/*!
 * @brief  Constructs a new ListDomainsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDomainsRequest::ListDomainsRequest(const ListDomainsRequest &other)
    : Route53DomainsRequest(new ListDomainsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListDomainsRequest object.
 */
ListDomainsRequest::ListDomainsRequest()
    : Route53DomainsRequest(new ListDomainsRequestPrivate(Route53DomainsRequest::ListDomainsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDomainsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListDomainsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDomainsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDomainsRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListDomainsRequestPrivate
 *
 * @brief  Private implementation for ListDomainsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListDomainsRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public ListDomainsRequest instance.
 */
ListDomainsRequestPrivate::ListDomainsRequestPrivate(
    const Route53DomainsRequest::Action action, ListDomainsRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListDomainsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDomainsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDomainsRequest instance.
 */
ListDomainsRequestPrivate::ListDomainsRequestPrivate(
    const ListDomainsRequestPrivate &other, ListDomainsRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
