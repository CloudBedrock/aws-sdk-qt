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

#include "createbuildrequest.h"
#include "createbuildrequest_p.h"
#include "createbuildresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  CreateBuildRequest
 *
 * @brief  Implements GameLift CreateBuild requests.
 *
 * @see    GameLiftClient::createBuild
 */

/**
 * @brief  Constructs a new CreateBuildRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateBuildRequest::CreateBuildRequest(const CreateBuildRequest &other)
    : GameLiftRequest(new CreateBuildRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateBuildRequest object.
 */
CreateBuildRequest::CreateBuildRequest()
    : GameLiftRequest(new CreateBuildRequestPrivate(GameLiftRequest::CreateBuildAction, this))
{

}

bool CreateBuildRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateBuildResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateBuildResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * CreateBuildRequest::response(QNetworkReply * const reply) const
{
    return new CreateBuildResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateBuildRequestPrivate
 *
 * @brief  Private implementation for CreateBuildRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBuildRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public CreateBuildRequest instance.
 */
CreateBuildRequestPrivate::CreateBuildRequestPrivate(
    const GameLiftRequest::Action action, CreateBuildRequest * const q)
    : CreateBuildPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateBuildRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateBuildRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateBuildRequest instance.
 */
CreateBuildRequestPrivate::CreateBuildRequestPrivate(
    const CreateBuildRequestPrivate &other, CreateBuildRequest * const q)
    : CreateBuildPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
