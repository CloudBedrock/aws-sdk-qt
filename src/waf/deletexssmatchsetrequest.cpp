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

#include "deletexssmatchsetrequest.h"
#include "deletexssmatchsetrequest_p.h"
#include "deletexssmatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  DeleteXssMatchSetRequest
 *
 * @brief  Implements WAF DeleteXssMatchSet requests.
 *
 * @see    WAFClient::deleteXssMatchSet
 */

/**
 * @brief  Constructs a new DeleteXssMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteXssMatchSetRequest::DeleteXssMatchSetRequest(const DeleteXssMatchSetRequest &other)
    : WAFRequest(new DeleteXssMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteXssMatchSetRequest object.
 */
DeleteXssMatchSetRequest::DeleteXssMatchSetRequest()
    : WAFRequest(new DeleteXssMatchSetRequestPrivate(WAFRequest::DeleteXssMatchSetAction, this))
{

}

bool DeleteXssMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteXssMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteXssMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteXssMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteXssMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteXssMatchSetRequestPrivate
 *
 * @brief  Private implementation for DeleteXssMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteXssMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public DeleteXssMatchSetRequest instance.
 */
DeleteXssMatchSetRequestPrivate::DeleteXssMatchSetRequestPrivate(
    const WAFRequest::Action action, DeleteXssMatchSetRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteXssMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteXssMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteXssMatchSetRequest instance.
 */
DeleteXssMatchSetRequestPrivate::DeleteXssMatchSetRequestPrivate(
    const DeleteXssMatchSetRequestPrivate &other, DeleteXssMatchSetRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
