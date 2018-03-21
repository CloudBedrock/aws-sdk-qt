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

#include "createhitrequest.h"
#include "createhitrequest_p.h"
#include "createhitresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  CreateHITRequest
 *
 * @brief  Implements MTurk CreateHIT requests.
 *
 * @see    MTurkClient::createHIT
 */

/**
 * @brief  Constructs a new CreateHITRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateHITRequest::CreateHITRequest(const CreateHITRequest &other)
    : MTurkRequest(new CreateHITRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateHITRequest object.
 */
CreateHITRequest::CreateHITRequest()
    : MTurkRequest(new CreateHITRequestPrivate(MTurkRequest::CreateHITAction, this))
{

}

bool CreateHITRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateHITResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateHITResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * CreateHITRequest::response(QNetworkReply * const reply) const
{
    return new CreateHITResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateHITRequestPrivate
 *
 * @brief  Private implementation for CreateHITRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHITRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public CreateHITRequest instance.
 */
CreateHITRequestPrivate::CreateHITRequestPrivate(
    const MTurkRequest::Action action, CreateHITRequest * const q)
    : CreateHITPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateHITRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateHITRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateHITRequest instance.
 */
CreateHITRequestPrivate::CreateHITRequestPrivate(
    const CreateHITRequestPrivate &other, CreateHITRequest * const q)
    : CreateHITPrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS
