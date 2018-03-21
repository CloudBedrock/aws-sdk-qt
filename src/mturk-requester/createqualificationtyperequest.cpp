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

#include "createqualificationtyperequest.h"
#include "createqualificationtyperequest_p.h"
#include "createqualificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  CreateQualificationTypeRequest
 *
 * @brief  Implements MTurk CreateQualificationType requests.
 *
 * @see    MTurkClient::createQualificationType
 */

/**
 * @brief  Constructs a new CreateQualificationTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateQualificationTypeResponse::CreateQualificationTypeResponse(

/**
 * @brief  Constructs a new CreateQualificationTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateQualificationTypeRequest::CreateQualificationTypeRequest(const CreateQualificationTypeRequest &other)
    : MTurkRequest(new CreateQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateQualificationTypeRequest object.
 */
CreateQualificationTypeRequest::CreateQualificationTypeRequest()
    : MTurkRequest(new CreateQualificationTypeRequestPrivate(MTurkRequest::CreateQualificationTypeAction, this))
{

}

bool CreateQualificationTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateQualificationTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateQualificationTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * CreateQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateQualificationTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateQualificationTypeRequestPrivate
 *
 * @brief  Private implementation for CreateQualificationTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateQualificationTypeRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public CreateQualificationTypeRequest instance.
 */
CreateQualificationTypeRequestPrivate::CreateQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, CreateQualificationTypeRequest * const q)
    : CreateQualificationTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateQualificationTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateQualificationTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateQualificationTypeRequest instance.
 */
CreateQualificationTypeRequestPrivate::CreateQualificationTypeRequestPrivate(
    const CreateQualificationTypeRequestPrivate &other, CreateQualificationTypeRequest * const q)
    : CreateQualificationTypePrivate(other, q)
{

}
