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

#include "getlexiconrequest.h"
#include "getlexiconrequest_p.h"
#include "getlexiconresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::GetLexiconRequest
 *
 * \brief The GetLexiconRequest class provides an interface for Polly GetLexicon requests.
 *
 * \ingroup Polly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::getLexicon
 */

/*!
 * @brief  Constructs a new GetLexiconRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLexiconRequest::GetLexiconRequest(const GetLexiconRequest &other)
    : PollyRequest(new GetLexiconRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetLexiconRequest object.
 */
GetLexiconRequest::GetLexiconRequest()
    : PollyRequest(new GetLexiconRequestPrivate(PollyRequest::GetLexiconAction, this))
{

}

/*!
 * \reimp
 */
bool GetLexiconRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetLexiconResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLexiconResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PollyClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLexiconRequest::response(QNetworkReply * const reply) const
{
    return new GetLexiconResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetLexiconRequestPrivate
 *
 * @brief  Private implementation for GetLexiconRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetLexiconRequestPrivate object.
 *
 * @param  action  Polly action being performed.
 * @param  q       Pointer to this object's public GetLexiconRequest instance.
 */
GetLexiconRequestPrivate::GetLexiconRequestPrivate(
    const PollyRequest::Action action, GetLexiconRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
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
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
