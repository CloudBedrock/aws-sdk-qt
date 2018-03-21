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

#include "getqualificationtyperequest.h"
#include "getqualificationtyperequest_p.h"
#include "getqualificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  GetQualificationTypeRequest
 *
 * @brief  Implements MTurk GetQualificationType requests.
 *
 * @see    MTurkClient::getQualificationType
 */

/**
 * @brief  Constructs a new GetQualificationTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetQualificationTypeResponse::GetQualificationTypeResponse(

/**
 * @brief  Constructs a new GetQualificationTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetQualificationTypeRequest::GetQualificationTypeRequest(const GetQualificationTypeRequest &other)
    : MTurkRequest(new GetQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetQualificationTypeRequest object.
 */
GetQualificationTypeRequest::GetQualificationTypeRequest()
    : MTurkRequest(new GetQualificationTypeRequestPrivate(MTurkRequest::GetQualificationTypeAction, this))
{

}

bool GetQualificationTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetQualificationTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetQualificationTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * GetQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetQualificationTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetQualificationTypeRequestPrivate
 *
 * @brief  Private implementation for GetQualificationTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQualificationTypeRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public GetQualificationTypeRequest instance.
 */
GetQualificationTypeRequestPrivate::GetQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, GetQualificationTypeRequest * const q)
    : GetQualificationTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetQualificationTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetQualificationTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetQualificationTypeRequest instance.
 */
GetQualificationTypeRequestPrivate::GetQualificationTypeRequestPrivate(
    const GetQualificationTypeRequestPrivate &other, GetQualificationTypeRequest * const q)
    : GetQualificationTypePrivate(other, q)
{

}
