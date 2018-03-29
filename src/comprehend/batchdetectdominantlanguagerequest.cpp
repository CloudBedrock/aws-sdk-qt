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

#include "batchdetectdominantlanguagerequest.h"
#include "batchdetectdominantlanguagerequest_p.h"
#include "batchdetectdominantlanguageresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/**
 * @class  BatchDetectDominantLanguageRequest
 *
 * @brief  Implements Comprehend BatchDetectDominantLanguage requests.
 *
 * @see    ComprehendClient::batchDetectDominantLanguage
 */

/**
 * @brief  Constructs a new BatchDetectDominantLanguageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchDetectDominantLanguageRequest::BatchDetectDominantLanguageRequest(const BatchDetectDominantLanguageRequest &other)
    : ComprehendRequest(new BatchDetectDominantLanguageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchDetectDominantLanguageRequest object.
 */
BatchDetectDominantLanguageRequest::BatchDetectDominantLanguageRequest()
    : ComprehendRequest(new BatchDetectDominantLanguageRequestPrivate(ComprehendRequest::BatchDetectDominantLanguageAction, this))
{

}

bool BatchDetectDominantLanguageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchDetectDominantLanguageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchDetectDominantLanguageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ComprehendClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDetectDominantLanguageRequest::response(QNetworkReply * const reply) const
{
    return new BatchDetectDominantLanguageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchDetectDominantLanguageRequestPrivate
 *
 * @brief  Private implementation for BatchDetectDominantLanguageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDetectDominantLanguageRequestPrivate object.
 *
 * @param  action  Comprehend action being performed.
 * @param  q       Pointer to this object's public BatchDetectDominantLanguageRequest instance.
 */
BatchDetectDominantLanguageRequestPrivate::BatchDetectDominantLanguageRequestPrivate(
    const ComprehendRequest::Action action, BatchDetectDominantLanguageRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchDetectDominantLanguageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchDetectDominantLanguageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchDetectDominantLanguageRequest instance.
 */
BatchDetectDominantLanguageRequestPrivate::BatchDetectDominantLanguageRequestPrivate(
    const BatchDetectDominantLanguageRequestPrivate &other, BatchDetectDominantLanguageRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
