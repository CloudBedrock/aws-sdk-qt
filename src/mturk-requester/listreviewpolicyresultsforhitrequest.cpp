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

#include "listreviewpolicyresultsforhitrequest.h"
#include "listreviewpolicyresultsforhitrequest_p.h"
#include "listreviewpolicyresultsforhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/**
 * @class  ListReviewPolicyResultsForHITRequest
 *
 * @brief  Implements MTurk ListReviewPolicyResultsForHIT requests.
 *
 * @see    MTurkClient::listReviewPolicyResultsForHIT
 */

/**
 * @brief  Constructs a new ListReviewPolicyResultsForHITRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListReviewPolicyResultsForHITRequest::ListReviewPolicyResultsForHITRequest(const ListReviewPolicyResultsForHITRequest &other)
    : MTurkRequest(new ListReviewPolicyResultsForHITRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListReviewPolicyResultsForHITRequest object.
 */
ListReviewPolicyResultsForHITRequest::ListReviewPolicyResultsForHITRequest()
    : MTurkRequest(new ListReviewPolicyResultsForHITRequestPrivate(MTurkRequest::ListReviewPolicyResultsForHITAction, this))
{

}

bool ListReviewPolicyResultsForHITRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListReviewPolicyResultsForHITResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListReviewPolicyResultsForHITResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * ListReviewPolicyResultsForHITRequest::response(QNetworkReply * const reply) const
{
    return new ListReviewPolicyResultsForHITResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListReviewPolicyResultsForHITRequestPrivate
 *
 * @brief  Private implementation for ListReviewPolicyResultsForHITRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListReviewPolicyResultsForHITRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public ListReviewPolicyResultsForHITRequest instance.
 */
ListReviewPolicyResultsForHITRequestPrivate::ListReviewPolicyResultsForHITRequestPrivate(
    const MTurkRequest::Action action, ListReviewPolicyResultsForHITRequest * const q)
    : ListReviewPolicyResultsForHITPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListReviewPolicyResultsForHITRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListReviewPolicyResultsForHITRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListReviewPolicyResultsForHITRequest instance.
 */
ListReviewPolicyResultsForHITRequestPrivate::ListReviewPolicyResultsForHITRequestPrivate(
    const ListReviewPolicyResultsForHITRequestPrivate &other, ListReviewPolicyResultsForHITRequest * const q)
    : ListReviewPolicyResultsForHITPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
