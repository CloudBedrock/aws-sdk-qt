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

#include "acceptqualificationrequestrequest.h"
#include "acceptqualificationrequestrequest_p.h"
#include "acceptqualificationrequestresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  AcceptQualificationRequestRequest
 *
 * @brief  Implements MTurk AcceptQualificationRequest requests.
 *
 * @see    MTurkClient::acceptQualificationRequest
 */

/**
 * @brief  Constructs a new AcceptQualificationRequestRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AcceptQualificationRequestRequest::AcceptQualificationRequestRequest(const AcceptQualificationRequestRequest &other)
    : MTurkRequest(new AcceptQualificationRequestRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AcceptQualificationRequestRequest object.
 */
AcceptQualificationRequestRequest::AcceptQualificationRequestRequest()
    : MTurkRequest(new AcceptQualificationRequestRequestPrivate(MTurkRequest::AcceptQualificationRequestAction, this))
{

}

bool AcceptQualificationRequestRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AcceptQualificationRequestResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AcceptQualificationRequestResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * AcceptQualificationRequestRequest::response(QNetworkReply * const reply) const
{
    return new AcceptQualificationRequestResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AcceptQualificationRequestRequestPrivate
 *
 * @brief  Private implementation for AcceptQualificationRequestRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptQualificationRequestRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public AcceptQualificationRequestRequest instance.
 */
AcceptQualificationRequestRequestPrivate::AcceptQualificationRequestRequestPrivate(
    const MTurkRequest::Action action, AcceptQualificationRequestRequest * const q)
    : AcceptQualificationRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AcceptQualificationRequestRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AcceptQualificationRequestRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AcceptQualificationRequestRequest instance.
 */
AcceptQualificationRequestRequestPrivate::AcceptQualificationRequestRequestPrivate(
    const AcceptQualificationRequestRequestPrivate &other, AcceptQualificationRequestRequest * const q)
    : AcceptQualificationRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS
