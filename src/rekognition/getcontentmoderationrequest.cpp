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

#include "getcontentmoderationrequest.h"
#include "getcontentmoderationrequest_p.h"
#include "getcontentmoderationresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetContentModerationRequest
 *
 * \brief The GetContentModerationRequest class provides an interface for Rekognition GetContentModeration requests.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getContentModeration
 */

/*!
 * @brief  Constructs a new GetContentModerationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetContentModerationRequest::GetContentModerationRequest(const GetContentModerationRequest &other)
    : RekognitionRequest(new GetContentModerationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetContentModerationRequest object.
 */
GetContentModerationRequest::GetContentModerationRequest()
    : RekognitionRequest(new GetContentModerationRequestPrivate(RekognitionRequest::GetContentModerationAction, this))
{

}

/*!
 * \reimp
 */
bool GetContentModerationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetContentModerationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetContentModerationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContentModerationRequest::response(QNetworkReply * const reply) const
{
    return new GetContentModerationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetContentModerationRequestPrivate
 *
 * @brief  Private implementation for GetContentModerationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetContentModerationRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public GetContentModerationRequest instance.
 */
GetContentModerationRequestPrivate::GetContentModerationRequestPrivate(
    const RekognitionRequest::Action action, GetContentModerationRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetContentModerationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetContentModerationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetContentModerationRequest instance.
 */
GetContentModerationRequestPrivate::GetContentModerationRequestPrivate(
    const GetContentModerationRequestPrivate &other, GetContentModerationRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
