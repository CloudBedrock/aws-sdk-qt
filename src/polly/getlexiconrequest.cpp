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

#include "getlexiconrequest.h"
#include "getlexiconrequest_p.h"
#include "getlexiconresponse.h"
#include "pollyrequest_p.h"

namespace AWS {
namespace Polly {

/**
 * @class  GetLexiconRequest
 *
 * @brief  Implements Polly GetLexicon requests.
 *
 * @see    PollyClient::getLexicon
 */

/**
 * @brief  Constructs a new GetLexiconResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLexiconResponse::GetLexiconResponse(

/**
 * @brief  Constructs a new GetLexiconRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLexiconRequest::GetLexiconRequest(const GetLexiconRequest &other)
    : PollyRequest(new GetLexiconRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLexiconRequest object.
 */
GetLexiconRequest::GetLexiconRequest()
    : PollyRequest(new GetLexiconRequestPrivate(PollyRequest::GetLexiconAction, this))
{

}

bool GetLexiconRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLexiconResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLexiconResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PollyClient::send
 */
AwsAbstractResponse * GetLexiconRequest::response(QNetworkReply * const reply) const
{
    return new GetLexiconResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLexiconRequestPrivate
 *
 * @brief  Private implementation for GetLexiconRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLexiconRequestPrivate object.
 *
 * @param  action  Polly action being performed.
 * @param  q       Pointer to this object's public GetLexiconRequest instance.
 */
GetLexiconRequestPrivate::GetLexiconRequestPrivate(
    const PollyRequest::Action action, GetLexiconRequest * const q)
    : GetLexiconPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLexiconRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLexiconRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLexiconRequest instance.
 */
GetLexiconRequestPrivate::GetLexiconRequestPrivate(
    const GetLexiconRequestPrivate &other, GetLexiconRequest * const q)
    : GetLexiconPrivate(other, q)
{

}
