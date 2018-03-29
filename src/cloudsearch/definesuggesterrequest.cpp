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

#include "definesuggesterrequest.h"
#include "definesuggesterrequest_p.h"
#include "definesuggesterresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/**
 * @class  DefineSuggesterRequest
 *
 * @brief  Implements CloudSearch DefineSuggester requests.
 *
 * @see    CloudSearchClient::defineSuggester
 */

/**
 * @brief  Constructs a new DefineSuggesterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DefineSuggesterRequest::DefineSuggesterRequest(const DefineSuggesterRequest &other)
    : CloudSearchRequest(new DefineSuggesterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DefineSuggesterRequest object.
 */
DefineSuggesterRequest::DefineSuggesterRequest()
    : CloudSearchRequest(new DefineSuggesterRequestPrivate(CloudSearchRequest::DefineSuggesterAction, this))
{

}

bool DefineSuggesterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DefineSuggesterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DefineSuggesterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * DefineSuggesterRequest::response(QNetworkReply * const reply) const
{
    return new DefineSuggesterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DefineSuggesterRequestPrivate
 *
 * @brief  Private implementation for DefineSuggesterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DefineSuggesterRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DefineSuggesterRequest instance.
 */
DefineSuggesterRequestPrivate::DefineSuggesterRequestPrivate(
    const CloudSearchRequest::Action action, DefineSuggesterRequest * const q)
    : DefineSuggesterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DefineSuggesterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DefineSuggesterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DefineSuggesterRequest instance.
 */
DefineSuggesterRequestPrivate::DefineSuggesterRequestPrivate(
    const DefineSuggesterRequestPrivate &other, DefineSuggesterRequest * const q)
    : DefineSuggesterPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
