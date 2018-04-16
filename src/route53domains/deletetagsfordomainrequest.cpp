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

#include "deletetagsfordomainrequest.h"
#include "deletetagsfordomainrequest_p.h"
#include "deletetagsfordomainresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::DeleteTagsForDomainRequest
 *
 * \brief The DeleteTagsForDomainRequest class encapsulates Route53Domains DeleteTagsForDomain requests.
 *
 * \ingroup Route53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::deleteTagsForDomain
 */

/*!
 * @brief  Constructs a new DeleteTagsForDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTagsForDomainRequest::DeleteTagsForDomainRequest(const DeleteTagsForDomainRequest &other)
    : Route53DomainsRequest(new DeleteTagsForDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteTagsForDomainRequest object.
 */
DeleteTagsForDomainRequest::DeleteTagsForDomainRequest()
    : Route53DomainsRequest(new DeleteTagsForDomainRequestPrivate(Route53DomainsRequest::DeleteTagsForDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTagsForDomainRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteTagsForDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTagsForDomainResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTagsForDomainRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTagsForDomainResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteTagsForDomainRequestPrivate
 *
 * @brief  Private implementation for DeleteTagsForDomainRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteTagsForDomainRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public DeleteTagsForDomainRequest instance.
 */
DeleteTagsForDomainRequestPrivate::DeleteTagsForDomainRequestPrivate(
    const Route53DomainsRequest::Action action, DeleteTagsForDomainRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteTagsForDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTagsForDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTagsForDomainRequest instance.
 */
DeleteTagsForDomainRequestPrivate::DeleteTagsForDomainRequestPrivate(
    const DeleteTagsForDomainRequestPrivate &other, DeleteTagsForDomainRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
